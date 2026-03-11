/*
 * func-name: ?AddBattleFieldIntro@BattleFieldManager@GameClient@@QAEXJABUBATTLE_FIELD_INFO@2@@Z_0
 * func-address: 0x1021d7c0
 * callers: 0x100147c7
 * callees: 0x100074c3, 0x10007f8b, 0x100082b5, 0x1000f6fa, 0x1001816a
 */

void __thiscall GameClient::BattleFieldManager::AddBattleFieldIntro(
        GameClient::BattleFieldManager *this,
        int a2,
        const struct GameClient::BATTLE_FIELD_INFO *a3)
{
  int v4; // ebp
  char *v5; // eax
  char *v6; // esi
  int v7; // esi
  int v8; // eax
  Event *v9; // eax
  struct BinStream *Stream; // esi
  int v11; // [esp+8h] [ebp-E8h]
  int v12; // [esp+Ch] [ebp-E4h]
  char *v13; // [esp+1Ch] [ebp-D4h] BYREF
  int v14; // [esp+20h] [ebp-D0h]
  int v15; // [esp+28h] [ebp-C8h] BYREF
  int v16; // [esp+2Ch] [ebp-C4h] BYREF
  int v17; // [esp+ECh] [ebp-4h]

  v15 = a2;
  sub_1000F6FA((int)&v13, (int)&v15);
  v4 = *((_DWORD *)this + 13);
  v5 = (char *)this + 48;
  v6 = v13;
  if ( !v13 || v13 != v5 )
    _invalid_parameter_noinfo();
  if ( v14 == v4 )
  {
    v16 = a2;
    sub_10007F8B(a3);
    v17 = 0;
    sub_100082B5((int)&v13, (int)&v16);
    v17 = -1;
    sub_100074C3(v11, v12);
    v8 = EventAttemper::Instance(9, 2100);
    v9 = (Event *)EventAttemper::AddEvent(v8);
    Stream = Event::GetStream(v9);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
  }
  else
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v14 == *((_DWORD *)v6 + 1) )
      _invalid_parameter_noinfo();
    v7 = v14 + 12;
    *(_BYTE *)(v14 + 69) = *((_BYTE *)a3 + 57);
    *(_BYTE *)(v7 + 59) = *((_BYTE *)a3 + 59);
    *(_BYTE *)(v7 + 56) = *((_BYTE *)a3 + 56);
    *(_DWORD *)(v7 + 72) = *((_DWORD *)a3 + 18);
    *(_DWORD *)(v7 + 76) = *((_DWORD *)a3 + 19);
    *(_DWORD *)(v7 + 64) = *((_DWORD *)a3 + 16);
    *(_DWORD *)(v7 + 68) = *((_DWORD *)a3 + 17);
    *(_BYTE *)(v7 + 58) = *((_BYTE *)a3 + 58);
    *(_DWORD *)(v7 + 60) = *((_DWORD *)a3 + 15);
    std::string::operator=(v7 + 28, (char *)a3 + 28);
    std::string::operator=(v7 + 80, (char *)a3 + 80);
    std::string::operator=(v7, a3);
    *(_DWORD *)(v7 + 108) = *((_DWORD *)a3 + 27);
    *(_DWORD *)(v7 + 112) = *((_DWORD *)a3 + 28);
    *(_DWORD *)(v7 + 116) = *((_DWORD *)a3 + 29);
  }
}
