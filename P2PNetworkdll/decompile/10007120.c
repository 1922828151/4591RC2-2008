/*
 * func-name: sub_10007120
 * func-address: 0x10007120
 * callers: 0x10004b30, 0x10007c20
 * callees: 0x10007680, 0x10023306
 */

_DWORD *__userpurge sub_10007120@<eax>(_DWORD *a1@<esi>, _DWORD *a2, int a3, _DWORD **a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int i; // edi
  int v7; // ecx
  int v8; // ebx
  _DWORD **v9; // edx
  int v10; // ecx
  _DWORD *v11; // ebx
  int v12; // ebx
  _DWORD **v13; // edi
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = a1[8];
  v5 = v4 & sub_10007680();
  if ( a1[9] <= v5 )
    v5 += -1 - (v4 >> 1);
  for ( i = v5; ; --i )
  {
    v7 = a1[5];
    if ( !v7 || i >= (a1[6] - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = 8 * i + a1[5];
    if ( a3 != *(_DWORD *)v8 )
      invalid_parameter_noinfo();
    v9 = a4;
    if ( a4 != *(_DWORD ***)(v8 + 4) )
      break;
    v10 = a1[5];
    if ( !v10 || i >= (a1[6] - v10) >> 3 )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    v11 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v11 )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  if ( v9 == *(_DWORD ***)(a3 + 4) )
  {
    invalid_parameter_noinfo();
    v9 = a4;
  }
  v12 = (int)*v9;
  if ( v9 != (_DWORD **)a1[2] )
  {
    *v9[1] = v12;
    v13 = v9 + 2;
    (*v9)[1] = v9[1];
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(v9 + 9));
    std::string::~string(v13);
    operator delete(a4);
    --a1[3];
  }
  result = a2;
  *a2 = a3;
  a2[1] = v12;
  return result;
}
