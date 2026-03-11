/*
 * func-name: sub_10046710
 * func-address: 0x10046710
 * callers: 0x10022aa0, 0x1002cbf0, 0x1002cfb0, 0x10042140, 0x10042a80, 0x10042cd0
 * callees: 0x1000b770, 0x10024740, 0x10024870, 0x10024d90, 0x10024f00, 0x10049080, 0x1004e870
 */

int __stdcall sub_10046710(int a1)
{
  int *i; // esi
  int v2; // ebp

  if ( Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 52)) )
  {
    for ( i = **(int ***)(a1 + 8); i != *(int **)(a1 + 8); i = (int *)*i )
    {
      v2 = i[3];
      if ( v2 )
      {
        sub_10024D90((Outpop::Utility::Ref_Object **)i[3]);
        operator delete(v2);
      }
      if ( i == *(int **)(a1 + 8) )
        invalid_parameter_noinfo();
    }
    sub_10049080();
    Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  }
  sub_1000B770((_DWORD *)(a1 + 124));
  sub_10024870((_DWORD *)(a1 + 76));
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  sub_10024F00(a1 + 40);
  operator delete(*(_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 44) = 0;
  return sub_10024740((_DWORD *)a1);
}
