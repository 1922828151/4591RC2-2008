/*
 * func-name: sub_1001AC90
 * func-address: 0x1001ac90
 * callers: 0x10005560
 * callees: 0x10006f70, 0x1000b280, 0x1001e540, 0x100294f2
 */

void __stdcall sub_1001AC90(int a1)
{
  _DWORD *i; // edi
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  int v4; // eax
  _DWORD **v5; // ecx
  _DWORD *v6; // eax
  bool v7; // zf
  _DWORD *v8; // edi

  for ( i = **(_DWORD ***)(a1 + 148); i != *(_DWORD **)(a1 + 148); i = (_DWORD *)*i )
  {
    v2 = (void (__thiscall ***)(_DWORD, int))i[2];
    if ( v2 )
      (**v2)(v2, 1);
    if ( i == *(_DWORD **)(a1 + 148) )
      invalid_parameter_noinfo();
  }
  v3 = *(_DWORD *)(a1 + 176);
  if ( v3 )
  {
    sub_1000B280(v3, *(_DWORD *)(a1 + 180));
    operator delete(*(void **)(a1 + 176));
  }
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  v4 = *(_DWORD *)(a1 + 160);
  if ( v4 )
  {
    sub_1001E540(v4, a1);
    operator delete(*(void **)(a1 + 160));
  }
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  v5 = *(_DWORD ***)(a1 + 148);
  v6 = *v5;
  *v5 = v5;
  *(_DWORD *)(*(_DWORD *)(a1 + 148) + 4) = *(_DWORD *)(a1 + 148);
  v7 = v6 == *(_DWORD **)(a1 + 148);
  *(_DWORD *)(a1 + 152) = 0;
  if ( !v7 )
  {
    do
    {
      v8 = (_DWORD *)*v6;
      operator delete(v6);
      v6 = v8;
    }
    while ( v8 != *(_DWORD **)(a1 + 148) );
  }
  operator delete(*(void **)(a1 + 148));
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 136) = &Outpop::Message::Synch_Group_Ack_Handler::`vftable';
  *(_DWORD *)(a1 + 136) = &Outpop::Message::Message_Handler::`vftable';
  sub_10006F70(a1 + 92);
  sub_10006F70(a1 + 52);
  Outpop::Utility::Lock::~Lock((Outpop::Utility::Lock *)(a1 + 28));
  Outpop::Utility::Lock::~Lock((Outpop::Utility::Lock *)(a1 + 4));
}
