
#include <iostream>
#include "include/Rational.h"

int main () {
	setlocale(LC_ALL,"Russian");
	try {
		Rational a (16, 5);
		Rational b (10, 4);
		cout << "Дробь a равна "<<a<<endl;
		cout << "Дробь b равна "<<b<<endl;
        Rational c=c.sum (a, b);
        cout << "Сумма a и b равна "<<c<<endl;
        c=c.diff (a, b);
        cout << "Разность a и b равна "<<c<<endl;
        c=c.mult (a, b);
        cout << "Произведение a и b равно "<<c<<endl;
        c=c.diff (a, b);
        cout << "Частное a и b равно "<<c<<endl;
        c=c.mult (b, 5);
        cout << "Результат домножения числа b на 5 равен "<<c<<endl;
        c=c.sum (a, 2);
        cout << "Результат прибавления к числу a 2 равен "<<c<<endl;
        cout << "Результат сравнения чисел a и b: "<<a.compare(b)<<endl;
        a*=b;
        cout << "Результат домножения числа a на b равен "<<a<<endl;
        cout << "Дробь a равна "<<a<<endl;
		cout << "Дробь b равна "<<b<<endl;
		b+=5;
        cout << "Результат прибавления к числу b целого числа 5 равен "<<b<<endl;
        cout << "Дробь a равна "<<a<<endl;
		cout << "Дробь b равна "<<b<<endl;
		a+=b;
        cout << "Результат прибавления к числу a рационального числа b равен "<<a<<endl;
        cout << "Дробь a равна "<<a<<endl;
		cout << "Дробь b равна "<<b<<endl;
		cout << "Результат сравнения a>b: "<<(a>b)<<endl;
		cout << "Результат сравнения a<b: "<<(a<b)<<endl;
		cout << "Результат сравнения b==b: "<<(b==b)<<endl;
/*		e=e.sum (q, w);
		r=r.diff (q, w);
		t=t.mult (q, w);
		y=y.divis (q, w);
		Rational a (3, 5);
		u=u.sum (a, 2);*/
		/*std::cout << "Ñóììà äðîáåé "; q.print1 (); std::cout<< " è ";  w.print1 (); std::cout<< " ðàâíà "; e.print1 (); std::cout <<"\n";
		std::cout << "Ñóììà äðîáè "; a.print1 (); std::cout << "è öåëîãî ÷èñëà 2 ðàâíà "; u.print1 (); std::cout << "\n";
		std::cout << "Ðàçíîñòü äðîáåé "; q.print1 (); std::cout<< " è ";  w.print1 (); std::cout<< " ðàâíà "; r.print1 (); std::cout <<"\n";
		std::cout << "Ïðîèçâåäåíèå äðîáåé "; q.print1 (); std::cout<< " è ";  w.print1 (); std::cout<< " ðàâíî "; t.print1 (); std::cout <<"\n";
		std::cout << "×àñòíîå äðîáåé "; q.print1 (); std::cout<< " è ";  w.print1 (); std::cout<< " ðàâíî "; y.print1 (); std::cout <<"\n";
		std::cout << "Äðîáè "; q.print1 (); std::cout << " è "; w.print1 (); std::cout << " ìîæíî òàêæå çàïèñàòü êàê "; q.print2 (); std::cout << " è "; w.print2 (); std::cout << "\n";
		std::cout << "Ñðàâíåíèå äðîáåé "; q.print1(); std::cout << " è "; w.print1(); std::cout << ": "<< q.compare (q, w)<<"\n";



		Rational q1 (-4, 5);
		Rational q2 (2, -5);
		Rational q3=q3.sum (q1, q2);
		std::cout << "Ñóììà äðîáåé "; q1.print1 (); std::cout<< " è ";  q2.print1 (); std::cout<< " ðàâíà "; q3.print1 (); std::cout <<"\n";

		Rational q4 (6, 13);
		Rational q5=q5.mult (q4, 2);
		std::cout << "Ïðîèçâåäåíèå äðîáè "; q4.print1 (); std::cout << " è öåëîãî ÷èñëà 2 ðàâíà "; q5.print1 (); std::cout <<"\n";
		std::cout << "\n";
		*/
	}
	catch (int err) {
		if (err==0) std::cout << "Çíàìåíàòåëü íå ìîæåò áûòü ðàâåí 0!\n";

	}
	return 0;
}
