/*
 * func-name: ?AddObserver@EventAttemper@@QAEHHPAVEventObserver@@@Z
 * func-address: 0x1016fa20
 * callers: 0x1016fb90
 * callees: 0x1001c7f0, 0x10026cc0, 0x100f5b70, 0x1010ec50, 0x1013f020, 0x1016fd00, 0x101702d0, 0x10170f50
 */

int __thiscall EventAttemper::AddObserver(EventAttemper *this, int a2, struct EventObserver *a3)
{
  struct EventObserver *v4; // ecx
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // ecx
  char *v9; // edi
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // ebp
  int v13; // [esp+4h] [ebp-34h] BYREF
  _DWORD v14[3]; // [esp+8h] [ebp-30h] BYREF
  _BYTE v15[4]; // [esp+14h] [ebp-24h] BYREF
  _DWORD *v16; // [esp+18h] [ebp-20h]
  int v17; // [esp+1Ch] [ebp-1Ch]
  _BYTE v18[12]; // [esp+20h] [ebp-18h] BYREF
  int v19; // [esp+34h] [ebp-4h]

  v4 = a3;
  if ( !a3 )
    return -1;
  ++*((_DWORD *)this + 12);
  v6 = (_DWORD *)((char *)this + 48);
  v13 = *((_DWORD *)this + 12);
  v14[0] = v4;
  sub_101702D0(v18, &v13);
  sub_1016FD00(&v13, &a2);
  v7 = v13;
  v8 = (_DWORD *)*((_DWORD *)this + 32);
  v9 = (char *)this + 124;
  v16 = v8;
  if ( !v13 || (char *)v13 != v9 )
    invalid_parameter_noinfo();
  v10 = v14[0];
  if ( (_DWORD *)v14[0] == v16 )
  {
    v16 = sub_1010EC50();
    v17 = 0;
    v19 = 0;
    v13 = a2;
    sub_10026CC0(v14, (int)v15);
    LOBYTE(v19) = 1;
    sub_10170F50(v18, &v13);
    sub_1013F020((int)v14);
    sub_1016FD00(&v13, &a2);
    v7 = v13;
    v10 = v14[0];
    v19 = -1;
    sub_1013F020((int)v15);
  }
  if ( !v7 )
    invalid_parameter_noinfo();
  if ( v10 == *(_DWORD *)(v7 + 4) )
    invalid_parameter_noinfo();
  v11 = *(_DWORD *)(v10 + 16);
  v12 = sub_100F5B70(v11, *(_DWORD *)(v11 + 4), v6);
  sub_1001C7F0((_DWORD *)(v10 + 12), 1u);
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)v12[1] = v12;
  return *v6;
}
