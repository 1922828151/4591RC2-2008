/*
 * func-name: sub_1000DBF0
 * func-address: 0x1000dbf0
 * callers: 0x10056e60, 0x10056e70, 0x10056e80
 * callees: 0x1000dcf0, 0x1004e870, 0x1004e938
 */

void __stdcall sub_1000DBF0(DWORD *a1)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // edi
  _DWORD *v3; // edi

  TlsFree(*a1);
  v1 = (_DWORD *)a1[8];
  if ( (unsigned int)v1 > a1[9] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v2 = (_DWORD *)a1[9];
    if ( a1[8] > (unsigned int)v2 )
      invalid_parameter_noinfo();
    if ( v1 == v2 )
      break;
    if ( (unsigned int)v1 >= a1[9] )
      invalid_parameter_noinfo();
    v3 = (_DWORD *)*v1;
    if ( *v1 )
    {
      if ( *v3 )
        operator delete[](*v3);
      *v3 = 0;
      operator delete(v3);
    }
    if ( (unsigned int)v1 >= a1[9] )
      invalid_parameter_noinfo();
    ++v1;
  }
  sub_1000DCF0();
  if ( a1[8] )
    operator delete(a1[8]);
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::Utility::Thread_Mutex *)(a1 + 1));
}
