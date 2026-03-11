/*
 * func-name: ?SetMapStatus@BattleFieldManager@GameClient@@QAEXJABV?$hash_map@W4NATION_TYPE@@JV?$hash_compare@W4NATION_TYPE@@U?$less@W4NATION_TYPE@@@std@@@stdext@@V?$allocator@U?$pair@$$CBW4NATION_TYPE@@J@std@@@std@@@stdext@@J@Z_0
 * func-address: 0x1021dcb0
 * callers: 0x1001a109
 * callees: 0x100074c3, 0x1000a515, 0x1000e5ed, 0x1000f6fa, 0x1000fa65, 0x1001816a, 0x1001a4d8, 0x102c9d62
 */

int __thiscall GameClient::BattleFieldManager::SetMapStatus(_DWORD *this, int a2, char *a3, int a4)
{
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  Event *v9; // eax
  struct BinStream *Stream; // esi
  int result; // eax
  int v12; // [esp+8h] [ebp-E4h]
  int v13; // [esp+8h] [ebp-E4h]
  int v14; // [esp+Ch] [ebp-E0h]
  int v15; // [esp+Ch] [ebp-E0h]
  int v16; // [esp+1Ch] [ebp-D0h] BYREF
  _DWORD *v17; // [esp+20h] [ebp-CCh] BYREF
  int v18; // [esp+24h] [ebp-C8h]
  char v19[136]; // [esp+28h] [ebp-C4h] BYREF
  char v20; // [esp+B0h] [ebp-3Ch] BYREF
  int v21; // [esp+D8h] [ebp-14h]
  int v22; // [esp+E8h] [ebp-4h]

  v16 = a2;
  sub_1000F6FA((int)&v17, (int)&v16);
  v5 = this[13];
  v6 = this + 12;
  v7 = v17;
  if ( !v17 || v17 != v6 )
    _invalid_parameter_noinfo();
  if ( v18 == v5 )
  {
    sub_1000E5ED(v12, v14);
    v22 = 0;
    if ( &v20 != a3 )
      sub_1000FA65((int)a3);
    v21 = a4;
    v16 = a2;
    sub_1000A515((int)&v16);
    sub_1001A4D8((int)v19);
    v22 = -1;
    sub_100074C3(v13, v15);
  }
  else
  {
    if ( !v7 )
      _invalid_parameter_noinfo();
    if ( v18 == v7[1] )
      _invalid_parameter_noinfo();
    if ( (char *)(v18 + 148) != a3 )
      sub_1000FA65((int)a3);
    *(_DWORD *)(v18 + 188) = a4;
  }
  v8 = EventAttemper::Instance(9, 2101);
  v9 = (Event *)EventAttemper::AddEvent(v8);
  Stream = Event::GetStream(v9);
  sub_1001816A(4);
  result = *((_DWORD *)Stream + 2);
  *(_DWORD *)(*((_DWORD *)Stream + 1) + result) = a2;
  *((_DWORD *)Stream + 2) += 4;
  return result;
}
