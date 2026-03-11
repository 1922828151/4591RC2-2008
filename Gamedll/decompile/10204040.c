/*
 * func-name: ?OnBegin@UpdateMemberIDObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x10204040
 * callers: 0x1000169f
 * callees: 0x10008f30, 0x10009b83, 0x10013011, 0x10017c29, 0x102c9d50
 */

void __thiscall GameClient::UpdateMemberIDObserver::OnBegin(GameClient::UpdateMemberIDObserver *this, struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edi
  _BYTE v5[4]; // [esp+Ch] [ebp-2Ch] BYREF
  void *v6; // [esp+10h] [ebp-28h]
  int v7; // [esp+14h] [ebp-24h]
  int v8; // [esp+18h] [ebp-20h]
  _BYTE v9[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v10; // [esp+20h] [ebp-18h]
  int v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+28h] [ebp-10h]
  int v13; // [esp+34h] [ebp-4h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    LOBYTE(v4) = (_BYTE)a2;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3 + 4;
  }
  sub_10008F30((int)v9);
  sub_10009B83((int)v5);
  GameClient::GroupManager::Instance();
  GameClient::GroupManager::UpdateMemberID(v4, (int)v9, (int)v5);
  if ( v6 )
    operator delete(v6);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( v10 )
    operator delete(v10);
}
