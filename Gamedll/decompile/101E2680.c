/*
 * func-name: sub_101E2680
 * func-address: 0x101e2680
 * callers: 0x1000956b
 * callees: 0x10015a0f, 0x1001816a
 */

void __thiscall sub_101E2680(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  Event *v9; // eax
  struct BinStream *Stream; // esi
  _DWORD *v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h]

  sub_10015A0F((int)&v11, (int)&a2);
  v4 = this[4];
  v5 = this + 3;
  v6 = v11;
  if ( !v11 || v11 != v5 )
    _invalid_parameter_noinfo();
  v7 = v12;
  if ( v12 != v4 )
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v7 == v6[1] )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(v7 + 12) + 228) = a3;
    v8 = EventAttemper::Instance(9, 2110);
    v9 = (Event *)EventAttemper::AddEvent(v8);
    Stream = Event::GetStream(v9);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
  }
}
