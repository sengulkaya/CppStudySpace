class Mint {
public:
    //members
    Mint();

    explicit Mint(int);
    friend std::ostream&  operator<<(std::ostream &os, const Mint &m);
    friend std::istream& operator>>(std::istream& is, Mint& m);

    friend Mint  operator+(const Mint & lhs,  const Mint & rhs);
    friend Mint operator-(const Mint & lhs,  const Mint & rhs);
    friend Mint  operator*(const Mint & lhs,  const Mint & rhs);
    friend Mint operator/(const Mint & lhs,  const Mint & rhs );

    friend Mint  operator==(const Mint & lhs,  const Mint & rhs);
    friend Mint operator!=(const Mint & lhs,  const Mint & rhs);
    friend Mint  operator<(const Mint & lhs,  const Mint & rhs);
    friend Mint operator<=(const Mint & lhs,  const Mint & rhs );
    friend Mint  operator>(const Mint & lhs,  const Mint & rhs);
    friend Mint operator>=(const Mint & lhs,  const Mint & rhs );

    Mint & operator+=(const Mint&);
    Mint & operator-=(const Mint&);
    Mint & operator*=(const Mint&);
    Mint & operator/=(const Mint&);
    Mint & operator%=(const Mint&);

};