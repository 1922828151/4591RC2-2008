/*
 * func-name: ?Update@ASummon@GameClient@@UAEXM@Z_0
 * func-address: 0x101d0a90
 * callers: 0x1000828d
 * callees: 0x10008260, 0x1000adc6, 0x1000c329, 0x1000c789, 0x1000dafd, 0x1000eb60, 0x10011b7b, 0x10016144, 0x10018cdc, 0x102c23d0
 */

void __userpurge GameClient::ASummon::Update(GameClient::ASummon *this@<ecx>, int a2@<ebx>, float a3)
{
  GameClient::Robot *v4; // edi
  GameClient::EstabManager *v5; // eax
  GameClient::Establishment *Establishment; // esi
  GameClient::EstabManager *v7; // eax
  struct GameClient::Establishment *v8; // edi
  int v9; // eax
  int v10; // edi
  unsigned int v11; // [esp+0h] [ebp-90h]
  float v12; // [esp+0h] [ebp-90h]
  unsigned int v13; // [esp+0h] [ebp-90h]
  _BYTE v14[4]; // [esp+10h] [ebp-80h] BYREF
  _BYTE v15[20]; // [esp+40h] [ebp-50h] BYREF
  _BYTE v16[60]; // [esp+54h] [ebp-3Ch] BYREF

  if ( !*((_DWORD *)this + 5) )
  {
    v4 = (GameClient::Robot *)*((_DWORD *)this + 8);
    if ( v4 )
    {
      v11 = *((_DWORD *)this + 39);
      v5 = GameClient::EstabManager::Instance();
      Establishment = GameClient::EstabManager::GetEstablishment(v5, v11);
      if ( Establishment )
      {
        v12 = GameClient::Robot::GetExEnergy(v4);
        GameClient::Establishment::SetEstabHyperEnergy(Establishment, v12);
        if ( *((_DWORD *)this + 40) != -1 )
        {
          v13 = *((_DWORD *)this + 40);
          v7 = GameClient::EstabManager::Instance();
          v8 = GameClient::EstabManager::GetEstablishment(v7, v13);
          if ( v8 )
          {
            if ( (unsigned int)sub_10011B7B() < 2 )
            {
              (*(void (__thiscall **)(GameClient::Establishment *, int, int))(*(_DWORD *)Establishment + 36))(
                Establishment,
                (int)v8 + 24,
                a2);
              (*(void (__thiscall **)(GameClient::Establishment *))(*(_DWORD *)Establishment + 40))(Establishment);
            }
            else
            {
              v9 = sub_1000C789(1);
              GameClient::Establishment::GetDummyPointMatrix(v14, v9);
              (*(void (__thiscall **)(GameClient::Establishment *, _BYTE *, int))(*(_DWORD *)Establishment + 36))(
                Establishment,
                v15,
                a2);
              v10 = *(_DWORD *)Establishment;
              sub_102C23D0(v16);
              (*(void (__thiscall **)(GameClient::Establishment *))(v10 + 40))(Establishment);
            }
            GameClient::Establishment::UpdateModel(Establishment);
          }
        }
      }
    }
  }
  GameClient::Aura::Update(this, a3);
}
