#include<bits/stdc++.h>

void Display(std::vector<int> v)
{
	std::cout<<std::endl;
	std::vector<int>::iterator it;
	for (it = v.begin() ; it != v.end()-1 ; ++it) std::cout<<*it<<",";
	std::cout<<*it<<std::endl;
}

void Sort(int left,int right,int mid,std::vector<int> &v)
{
	int s1 = mid - left + 1;
	int s2 = right - mid;

	int v1[s1],v2[s2];
	
	//storing the elements of both halves
	for (int i=0;i<s1;++i)
	{
		v1[i] = v[left+i];
	}

	for (int i=0;i<s2;++i)
	{
		v2[i] = v[mid+i+1];
	}

	int cntr = 0,lcntr=0,rcntr=0;

	//comparing the two vectors and then assigning
	while (cntr != right + 1 && lcntr != s1 && rcntr != s2)
	{
		std::cout<<"Comparing: "<<v1[lcntr]<<" "<<v2[rcntr]<<std::endl;
		if (v1[lcntr] <= v2[rcntr])
		{
			v[left + cntr] = v1[lcntr];
			lcntr++;
		}
		else
		{
			v[left + cntr] = v2[rcntr];
			rcntr++;
		}
		cntr++;
	}

	while (lcntr != s1)
	{
		v[left + cntr] = v1[lcntr];
		lcntr++;
		cntr++;
	}

	while (rcntr != s2)
	{
		v[left + cntr] = v2[rcntr];
		rcntr++;
		cntr++;
	}

}

void Merge(int left,int right,std::vector<int> &v)
{
	std::cout<<"Left: "<<left<<" Right: "<<right<<std::endl;
	int mid = left + (right-left)/2;
	if (left >= right) return;


	//constantly dividing into halves
	Merge(left,mid,v);
	Merge(mid+1,right,v);

	Sort(left,right,mid,v);
	Display(v);

}


int main()
{
	int size;
	
	//taking the input
	std::cout<<"Enter the size: ";
	std::cin>>size;

	std::vector<int> vec;
	for (int i = 0;i < size;++i)
	{
		int temp;
		std::cout<<"Enter element "<<i+1<<": ";
		std::cin>>temp;
		vec.push_back(temp);
	}

	std::cout<<"Your input: "<<std::endl;
	Display(vec);
	Merge(0,size-1,vec);

	return 0;
}
