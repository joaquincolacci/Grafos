#ifndef GRAFOS_H_
#define GRAFOS_H_
template <typename V, typename A> class Grafos
{
public:

	Grafos();
	~Grafos();

	void agregarVertice(V valor);
	void eliminarVertice(V target);
	bool existeVertice(V target) const;


	void agregarArco(V inicial, V final, A costo);
	/* void eliminarArco(V target);
	bool existeArco(V target) const;
	int costoArco(V inicial, V final) const; */
/*
	void devolverVertices() const;
	void devolverAdyacentes(V target) const;
*/

private:

	struct Vertice
	{
		V id;
		Vertice* sig;
		Arco* ady;
	}*puntVertices;


    struct Arco
	{
		A costo;
		Vertice* puntVert;
		Arco* sig;
	};
};

#endif
