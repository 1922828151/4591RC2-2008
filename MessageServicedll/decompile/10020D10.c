/*
 * func-name: sub_10020D10
 * func-address: 0x10020d10
 * callers: none
 * callees: 0x100211a0, 0x10021970, 0x10021ae0, 0x10021cd0, 0x10022cb0, 0x100294f2
 */

void __thiscall sub_10020D10(_DWORD *this, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // ebp
  void (__cdecl *v7)(); // ebx
  _DWORD *v8; // edi
  unsigned int v9; // esi
  _DWORD *v10; // eax
  _DWORD *i; // esi
  char v12; // [esp+17h] [ebp-3Dh] BYREF
  int v13; // [esp+18h] [ebp-3Ch]
  _BYTE v14[4]; // [esp+1Ch] [ebp-38h] BYREF
  _BYTE v15[4]; // [esp+20h] [ebp-34h] BYREF
  void *v16; // [esp+24h] [ebp-30h]
  void *v17; // [esp+30h] [ebp-24h]
  int v18; // [esp+34h] [ebp-20h]
  int v19; // [esp+38h] [ebp-1Ch]
  int v20; // [esp+50h] [ebp-4h]

  v13 = *(_DWORD *)(this[7] + 40);
  sub_10021CD0(v14, &v12);
  v20 = 1;
  v6 = this[9];
  v7 = invalid_parameter_noinfo;
  v8 = this + 8;
  if ( v6 > v8[2] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v9 = v8[2];
    if ( v8[1] > v9 )
      v7();
    if ( v6 == v9 )
      break;
    if ( v6 >= v8[2] )
    {
      v7();
      if ( v6 >= v8[2] )
        v7();
    }
    sub_10021970(v6);
    sub_10021AE0();
    if ( v6 >= v8[2] )
      invalid_parameter_noinfo();
    v7 = invalid_parameter_noinfo;
    v6 += 8;
  }
  v10 = v16;
  for ( i = *(_DWORD **)v16; i != v10; i = (_DWORD *)*i )
  {
    Outpop::Message::Message_Sender::send(i[2], i + 3);
    v10 = v16;
    if ( i == v16 )
    {
      v7();
      v10 = v16;
    }
  }
  v20 = 3;
  if ( v17 )
    operator delete(v17);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = -1;
  sub_10022CB0(v15);
  operator delete(v16);
}
