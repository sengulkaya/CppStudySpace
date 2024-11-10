template<class T>
void func(T a, T b);

int main()
{
    unsigned int uix = 10u;
    int y = -3;
    func<int>(uix, y);	//explicit template argument
    //..
    return 0;
}
