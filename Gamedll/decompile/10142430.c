/*
 * func-name: ?WriteSynaData@AuraManager@GameClient@@QAE_NAAVBinStream@@@Z_0
 * func-address: 0x10142430
 * callers: 0x10001fd7
 * callees: 0x1001124d, 0x10012837
 */

char __thiscall GameClient::AuraManager::WriteSynaData(GameClient::AuraManager *this, struct BinStream *a2)
{
  int v2; // eax
  int v3; // ecx
  struct BinStream *v4; // eax
  GameClient::AuraManager *v5; // eax
  struct GameClient::Aura *Aura; // eax
  unsigned int v8; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)a2 + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)a2 + 2) )
  {
    v4 = a2;
  }
  else
  {
    v4 = *(struct BinStream **)(v2 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v3;
  }
  if ( v4 != (struct BinStream *)-1 )
  {
    v8 = (unsigned int)v4;
    v5 = GameClient::AuraManager::Instance();
    Aura = GameClient::AuraManager::GetAura(v5, v8);
    if ( Aura )
      (*(void (__thiscall **)(struct GameClient::Aura *, struct BinStream *))(*(_DWORD *)Aura + 24))(Aura, a2);
  }
  return 1;
}
