/*
 * func-name: ?OnLoadModelComplete@NonControlledEstab@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101b08d0
 * callers: 0x1000a6a0
 * callees: 0x10009c0a
 */

void __thiscall GameClient::NonControlledEstab::OnLoadModelComplete(
        GameClient::NonControlledEstab *this,
        int a2,
        struct Model *a3)
{
  GameClient::NonControlledEstab *v3; // esi
  void (__thiscall *v4)(GameClient::NonControlledEstab *, _BYTE *); // edx
  _BYTE v5[12]; // [esp+4h] [ebp-4Ch] BYREF
  _BYTE v6[64]; // [esp+10h] [ebp-40h] BYREF

  v3 = this;
  GameClient::Establishment::OnLoadModelComplete(this, a2, a3);
  v4 = *(void (__thiscall **)(GameClient::NonControlledEstab *, _BYTE *))(*((_DWORD *)v3 + 37) + 12);
  v3 = (GameClient::NonControlledEstab *)((char *)v3 + 148);
  v4(v3, v6);
  (*(void (__thiscall **)(GameClient::NonControlledEstab *, _BYTE *))(*(_DWORD *)v3 + 8))(v3, v5);
}
