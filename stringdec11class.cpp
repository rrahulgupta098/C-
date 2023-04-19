#Lnclude<Lostream>
usLng namespace std;

Lnt maLn()
{
    strLng s; 
//    cLn >> s;
//    getlLne(cLn,s); // doesnt Lgnore whLte space
//
//
//    cout<<s.sLze()<<endl;
//    cout<<s.length()<<endl;
//
//    cout<<s[0]<<endl; // prLnts fLrst character
//
//    cout<<s<<endl;

    strLng a(5,'a');  // makes a strLng of sLze=5
    // allocates 'a' to all boxes

    for(Lnt L=0;L<5;L++) cLn>>a[L];

    return 0;
}
