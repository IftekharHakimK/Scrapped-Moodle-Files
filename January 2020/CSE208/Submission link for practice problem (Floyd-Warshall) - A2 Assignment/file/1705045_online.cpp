#include<bits/stdc++.h>
#define init 2
#define INF 1e8
using namespace std;
class Edge
{
    int b;
    double w;
public:
    Edge(int _b=-1,double _w=0)
    {
        b=_b,w=_w;
    }
    int getB()
    {
        return b;
    }
    void setB(int _b)
    {
        b=_b;
    }
    double getW()
    {
        return w;
    }
    void setW(double _w)
    {
        w=_w;
    }


};
class List
{
    Edge * all;
    int curS,allS;
public:
    List()
    {
        all=new Edge[2];
        curS=0,allS=2;
    }
    void clear()
    {
        curS=0;
        return;
    }

    ~List()
    {
        if(all)
            delete[] all;
        all=0;
        curS=allS=0;
    }
    void add(Edge now)
    {
        if(curS==allS)
        {
            allS*=2;
            Edge * temp;
            temp=new Edge[allS];
            for(int i=0; i<curS; i++)
                temp[i]=all[i];
            delete[] all;
            all=temp;
        }
        all[curS++]=now;
        return;
    }
    Edge * Search(int v)
    {
        for(int i=0; i<curS; i++)
            if(all[i].getB()==v)
            {
                return (&all[i]);
            }
        return NULL;
    }
    Edge* getItem(int i)
    {
        return (&all[i]);
    }
    void Remove(int v)
    {
        for(int i=0; i<curS; i++)
        {
            if(all[i].getB()==v)
            {
                all[i]=all[curS-1];
                curS--;
                return;
            }
        }
    }

    int getLength()
    {
        return curS;
    }

};
//Nodes are maded 0 indexed(Only here)
class Graph
{
    int n;
    List * all;
    double ** dist;
    int ** parent;
    double * ford;
    int * fordParent;
    bool * pro;
public:
    Graph()
    {
        n=0;
        all=0;
        dist=0;
        parent=0;
        ford=0;
        fordParent=0;
        pro=0;
    }
    ~Graph()
    {
        for(int i=0; i<n; i++)
        {
            if(dist[i])
                delete[] dist[i];
            if(parent[i])
                delete[] parent[i];
            dist[i]=0;
            parent[i]=0;
        }
        n=0;
        if(all)
            delete[] all;
        if(dist)
            delete[] * dist;
        if(parent)
            delete[] * parent;
        if(ford)
            delete[] ford;
        if(fordParent)
            delete[] fordParent;
        if(pro)
            delete[] pro;
        all=0;
        dist=0;
        parent=0;
        ford=0;
        fordParent=0;
        pro=0;
    }
    void setnVertices(int _n)
    {
        n=_n;
        all=new List[n+1];//extra for Jhonson
        ford=new double[n+1];
        fordParent=new int[n+1];
        dist=new double*[n];
        for(int i=0; i<n; i++)
            dist[i]=new double[n];
        parent=new int*[n];
        for(int i=0; i<n; i++)
            parent[i]=new int[n];
        return;
    }


    void printGraph()
    {
        for(int i=0; i<n; i++)
        {
            cout<< i+1<<':';
            for(int j=0; j<all[i].getLength(); j++)
            {
                int b=all[i].getItem(j)->getB();
                double w=all[i].getItem(j)->getW();
                cout<<b+1<<"("<<w<<")";
                if(j!=all[i].getLength()-1)
                    cout<<"--> ";
            }
            cout<<'\n';
        }
    }
    void removeEdge(int u,int v)
    {
        all[u-1].Remove(v-1);
        return;
    }
    Edge* searchEdge(int u,int v)
    {
        return all[u-1].Search(v-1);
    }
    bool addEdge(int u,int v,double w)
    {
        if(searchEdge(u,v)!=NULL)
            return false;
        all[u-1].add(Edge(v-1,w));
        return true;
    }
    void reweightEdge(int u,int v,double w)
    {
        if(searchEdge(u,v)==NULL)
        {
            addEdge(u,v,w);
            return;
        }
        searchEdge(u,v)->setW(w);
        return;
    }
    bool isEdge(int u,int v)
    {
        if(searchEdge(u,v)==NULL)
        {
            return false;
        }
        else
            return true;
    }
    double getWeight(int u,int v)
    {
        if(searchEdge(u,v)==NULL)
            return 1e5;
        else
            return searchEdge(u,v)->getW();
    }

    bool bellmanFord(int s)
    {
        for(int i=0; i<n; i++)
            ford[i]=INF;
        ford[s]=0;
        fordParent[s]=-1;
        for(int round=1; round<=n-1; round++)
        {
            for(int node=0; node<n; node++)
            {
                for(int j=0; j<all[node].getLength(); j++)
                {
                    int b=all[node].getItem(j)->getB();
                    double w=all[node].getItem(j)->getW();
                    if(ford[b]-(ford[node]+w)>1e-6)
                    {
                        fordParent[b]=node;
                        ford[b]=ford[node]+w;
                    }
                }
            }
        }

        for(int node=0; node<n; node++)
        {
            for(int j=0; j<all[node].getLength(); j++)
            {
                int b=all[node].getItem(j)->getB();
                double w=all[node].getItem(j)->getW();
                if(ford[b]-(ford[node]+w)>1e-6)
                {
                    //cout<<node<<' '<<b<<' '<<ford[node]<<' '<<ford[b]<<' '<<w<<endl;
                    return false;
                }
            }
        }
        return true;
    }
    void dijkstra(int s)
    {
        pro=new bool[n];
        for(int i=0; i<n; i++)
            pro[i]=0;
        for(int i=0; i<n; i++)
            dist[s][i]=INF,parent[s][i]=-1;
        dist[s][s]=0;
        parent[s][s]=-1;
        priority_queue<pair<double,int> >q;
        q.push({0,s});
        while(!q.empty())
        {
            int now=q.top().second;
            q.pop();
            if(pro[now])
            {
                continue;
            }
            pro[now]=1;
            for(int j=0; j<all[now].getLength(); j++)
            {
                int b=all[now].getItem(j)->getB();
                double w=all[now].getItem(j)->getW();
                if(dist[s][b]-(dist[s][now]+w)>1e-6)
                {
                    dist[s][b]=dist[s][now]+w;
                    q.push({-dist[s][b],b});
                    parent[s][b]=now;
                }
            }
        }
    }
    void floydWarshall()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                dist[i][j]=INF;
        }
        for(int i=0; i<n; i++)
        {
            dist[i][i]=0;
            parent[i][i]=-1;
        }
        for(int now=0; now<n; now++)
        {
            for(int j=0; j<all[now].getLength(); j++)
            {
                int b=all[now].getItem(j)->getB();
                double w=all[now].getItem(j)->getW();
                dist[now][b]=w;
                parent[now][b]=now;
            }
        }
        for(int med=0; med<n; med++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(dist[i][j]>dist[i][med]+dist[med][j])
                    {
                        dist[i][j]=dist[i][med]+dist[med][j];
                        parent[i][j]=parent[med][j];
                    }
                }
            }
        }

    }
    void johnsonsAlgo()
    {
        //new node is n,must be fixed before return
        for(int i=0; i<n; i++)
        {
            all[n].add(Edge(i,0));
        }
        n++;
        if(!bellmanFord(n-1))
        {
            n--;
            cout<<"There is a negative-weight cycle.\n";
            all[n].clear();
            return;
        }
        n--;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<all[i].getLength(); j++)
            {
                int b=all[i].getItem(j)->getB();
                double w=all[i].getItem(j)->getW();
                all[i].getItem(j)->setW(w+ford[i]-ford[b]);
                assert(w+ford[i]-ford[b]>=0);
            }
        }
        for(int i=0; i<n; i++)
        {
            dijkstra(i);
            for(int j=0; j<n; j++)
            {
                dist[i][j]-=ford[i]-ford[j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<all[i].getLength(); j++)
            {
                int b=all[i].getItem(j)->getB();
                double w=all[i].getItem(j)->getW();
                all[i].getItem(j)->setW(w-(ford[i]-ford[b]));
            }
        }
        all[n].clear();
        return;
    }
    double getShortestPathWeight(int u,int v)
    {
        if(bellmanFord(u-1))
            return ford[v-1];
        else
            return -1e8;
    }
    void printShortestPath(int now)
    {
        if(now==-1)
        {
            return;
        }
        printShortestPath(fordParent[now]);
        if(fordParent[now]!=-1)
            cout<<"--> ";

        if(fordParent[now]==-1)
            cout<<now+1;
        else
            cout<<now+1<<'('<<ford[now]-ford[fordParent[now]]<<')';
    }

    void printShortestPath(int u,int v,bool first)
    {

        if(parent[u][v]!=-1&&(first==1||parent[u][v]!=u))
        {
            printShortestPath(u,parent[u][v],first);
        }
        if(!(first&&v==u))
            cout<<" --> ";
        if(v==u)
        {
            cout<<u+1<<' ';
        }
        else
        {
            cout<<v+1<<'('<<(dist[u][v]-dist[u][parent[u][v]])<<')';
        }
    }
    int getParent(int u,int v)
    {
        return parent[u][v];
    }

    void printDistanceMatrix()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                if(dist[i][j]!=INF)
                    cout<<dist[i][j]<<' ';
                else
                    cout<<"INF ";
            cout<<'\n';
        }
    }
    void printPredecessorMatrix()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                if(parent[i][j]!=-1)
                    cout<<parent[i][j]+1 <<' ';
                else
                    cout<<"NIL ";
            cout<<'\n';
        }
    }
    void cleanSPInfo()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                dist[i][j]=INF;
                parent[i][j]=-1;
            }
        }
    }
    int getDist(int u,int v)
    {
        return dist[u][v];
    }
};



main()
{
    //freopen("in.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    Graph g;
    g.setnVertices(n);
    for(int i=0; i<m; i++)
    {
        int a,b;
        double w;
        cin>>a>>b>>w;
        g.addEdge(a,b,w);
    }
    cout<<"Graph Created.\n";
    int K;
    cin>>K;
    K--;
    g.floydWarshall();
    while(true)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1) break;
        a--;
        b--;
        if(g.getDist(a,K)+g.getDist(K,b)>=INF)
        {
            cout<<"Not possible\n";
            continue;
        }
        cout<<"Shortest path weight: "<<g.getDist(a,K)+g.getDist(K,b)<<'\n';
        cout<<"Path: ";
        g.printShortestPath(a,K,1);
        if(K!=b)
            g.printShortestPath(K,b,0);
        cout<<'\n';
    }

}

