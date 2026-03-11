/*
 * func-name: sub_101E20E0
 * func-address: 0x101e20e0
 * callers: 0x1000a119
 * callees: 0x10002270, 0x10015a0f, 0x1001816a
 */

char __thiscall sub_101E20E0(_DWORD *this, int a2)
{
  int v3; // edi
  void *v4; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // ebx
  int v7; // eax
  Event *v8; // eax
  struct BinStream *Stream; // esi
  void (__thiscall ***v10)(_DWORD, int); // ecx
  int v11; // eax
  Event *v12; // eax
  struct BinStream *v13; // esi
  int v15; // [esp+30h] [ebp-8h] BYREF
  void *v16; // [esp+34h] [ebp-4h]

  sub_10015A0F((int)&v15, (int)&a2);
  v3 = v15;
  v4 = (void *)this[4];
  v5 = this + 3;
  if ( !v15 || (_DWORD *)v15 != v5 )
    _invalid_parameter_noinfo();
  v6 = v16;
  if ( v16 == v4 )
    return 0;
  v7 = EventAttemper::Instance(9, 1005);
  v8 = (Event *)EventAttemper::AddEvent(v7);
  Stream = Event::GetStream(v8);
  sub_1001816A(4);
  *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
  *((_DWORD *)Stream + 2) += 4;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v6 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  if ( v6[3] )
  {
    if ( v6 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v10 = (void (__thiscall ***)(_DWORD, int))v6[3];
    if ( v10 )
      (**v10)(v10, 1);
    if ( v6 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v6[3] = 0;
  }
  sub_10002270((int)&v15, v3, v6);
  v11 = EventAttemper::Instance(9, 1005);
  v12 = (Event *)EventAttemper::AddEvent(v11);
  v13 = Event::GetStream(v12);
  sub_1001816A(4);
  *(_DWORD *)(*((_DWORD *)v13 + 1) + *((_DWORD *)v13 + 2)) = a2;
  *((_DWORD *)v13 + 2) += 4;
  return 1;
}
