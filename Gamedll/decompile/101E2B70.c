/*
 * func-name: sub_101E2B70
 * func-address: 0x101e2b70
 * callers: 0x1000f5d3
 * callees: 0x100092c8, 0x1000bbfe, 0x10015a0f, 0x1001816a, 0x102c9d98
 */

int __thiscall sub_101E2B70(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  _DWORD *v4; // esi
  int v6; // eax
  Event *v7; // eax
  _DWORD *v8; // ebx
  struct BinStream *Stream; // esi
  _DWORD *v10; // ebx
  int v11; // edi
  int v12; // eax
  Event *v13; // eax
  struct BinStream *v14; // esi
  _DWORD *v15; // [esp+30h] [ebp-20h] BYREF
  int v16; // [esp+34h] [ebp-1Ch]
  char v17[12]; // [esp+38h] [ebp-18h] BYREF
  int v18; // [esp+4Ch] [ebp-4h]

  v2 = a2;
  v3 = this[4];
  a2 = (_DWORD *)*a2;
  v4 = this + 3;
  sub_10015A0F((int)&v15, (int)&a2);
  if ( !v15 || v15 != v4 )
    _invalid_parameter_noinfo();
  if ( v16 != v3 )
    return 0;
  v6 = EventAttemper::Instance(9, 1004);
  v7 = (Event *)EventAttemper::AddEvent(v6);
  v8 = (_DWORD *)*v2;
  Stream = Event::GetStream(v7);
  sub_1001816A(4);
  *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v8;
  *((_DWORD *)Stream + 2) += 4;
  v10 = (_DWORD *)*v2;
  a2 = operator new(0xE8u);
  v18 = 0;
  if ( a2 )
    v11 = sub_1000BBFE((int)v2);
  else
    v11 = 0;
  v18 = -1;
  v15 = v10;
  v16 = v11;
  sub_100092C8((int)v17, (int)&v15);
  v12 = EventAttemper::Instance(9, 1004);
  v13 = (Event *)EventAttemper::AddEvent(v12);
  v14 = Event::GetStream(v13);
  sub_1001816A(4);
  *(_DWORD *)(*((_DWORD *)v14 + 1) + *((_DWORD *)v14 + 2)) = v10;
  *((_DWORD *)v14 + 2) += 4;
  return v11;
}
