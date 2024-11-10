template<typename T>
void func(T p)
{
    p.foo();
}

//Bazı derleyiciler işlev şablonuna ilişkin bir çağrı
//ile karşılaşmadıkça neredeyse hiç bir sözdizim
//geçerlilik kontrolü yapmaz.
int main()
{
    func(10);	//Geçersiz

    return 0;
}