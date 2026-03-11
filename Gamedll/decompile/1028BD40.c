/*
 * func-name: ?RefreshVehicleWeapon@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028bd40
 * callers: 0x10013dd1
 * callees: 0x1000290a, 0x1000adc6, 0x1000dafd, 0x1001290e
 */

void __thiscall CStatusUI::RefreshVehicleWeapon(CStatusUI *this)
{
  CStatusUI *v1; // esi
  int v2; // eax
  unsigned int v3; // edi
  int v4; // edx
  GameClient::EstabManager *v5; // eax
  GameClient::Establishment *Establishment; // eax
  struct GameClient::Seat *Seat; // eax
  struct GameClient::Seat *v8; // ebx
  int v9; // ecx
  int v10; // ecx
  GameClient::Equip *v11; // ebp
  int v12; // ecx
  CControlBox *v13; // esi
  int v14; // eax
  struct CREControl *(__thiscall *v15)(CControlBox *__hidden, int); // ebx
  struct CREControl *ControlByIndex; // eax
  struct CREControl *v17; // edi
  void (__thiscall **v18)(struct CREControl *, _DWORD); // ebx
  int v19; // eax
  struct CREControl *v20; // eax
  int v21; // ecx
  struct CREControl *v22; // eax
  int v23; // ecx
  struct CREControl *v24; // eax
  int v25; // ecx
  struct CREControl *v26; // eax
  int v27; // ecx
  float CapacitancePercent; // [esp+4h] [ebp-24h]
  unsigned int v29; // [esp+Ch] [ebp-1Ch]
  struct GameClient::Seat *v30; // [esp+18h] [ebp-10h]
  unsigned int v31; // [esp+1Ch] [ebp-Ch]
  int v32; // [esp+20h] [ebp-8h]

  v1 = this;
  v2 = *((_DWORD *)this + 969);
  v3 = 0;
  if ( v2 )
  {
    if ( (*((_DWORD *)this + 970) - v2) >> 2 )
    {
      v4 = *((_DWORD *)this + 1004);
      if ( *(_DWORD *)(v4 + 280) != -1 )
      {
        v29 = *(_DWORD *)(v4 + 280);
        v5 = GameClient::EstabManager::Instance();
        Establishment = GameClient::EstabManager::GetEstablishment(v5, v29);
        if ( Establishment )
        {
          Seat = GameClient::Establishment::GetSeat(Establishment, *(_DWORD *)(*((_DWORD *)v1 + 1004) + 284));
          v8 = Seat;
          v30 = Seat;
          if ( Seat )
          {
            v9 = *((_DWORD *)Seat + 8);
            v32 = v9 ? (*((_DWORD *)Seat + 9) - v9) >> 2 : 0;
            v31 = 0;
            if ( v32 > 0 )
            {
              while ( 1 )
              {
                v10 = *((_DWORD *)v8 + 8);
                if ( !v10 || v3 >= (*((_DWORD *)v8 + 9) - v10) >> 2 )
                  _invalid_parameter_noinfo();
                v11 = *(GameClient::Equip **)(*((_DWORD *)v8 + 8) + 4 * v3);
                if ( v11 )
                {
                  v12 = *((_DWORD *)v1 + 969);
                  if ( !v12 || v3 >= (*((_DWORD *)v1 + 970) - v12) >> 2 )
                    _invalid_parameter_noinfo();
                  v13 = *(CControlBox **)(*((_DWORD *)v1 + 969) + 4 * v3);
                  v14 = *((_DWORD *)v11 + 2);
                  if ( *(int *)(v14 + 320) > 0 )
                  {
                    v15 = CControlBox::GetControlByIndex;
                    ControlByIndex = CControlBox::GetControlByIndex(v13, 3);
                    v17 = ControlByIndex;
                    if ( ControlByIndex )
                    {
                      v18 = (void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)ControlByIndex + 200);
                      CapacitancePercent = GameClient::Equip::GetCapacitancePercent(v11);
                      (*v18)(v17, LODWORD(CapacitancePercent));
                      v15 = CControlBox::GetControlByIndex;
                    }
                    v19 = *((_DWORD *)v11 + 2);
                    if ( !*(_DWORD *)(v19 + 316) && !*(_BYTE *)(v19 + 2404) )
                    {
                      v20 = v15(v13, 4);
                      if ( v20 )
                      {
                        LOBYTE(v21) = *((_DWORD *)v11 + 185) == 0;
                        (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v20 + 136))(v20, v21);
                      }
                      v22 = v15(v13, 5);
                      if ( v22 )
                      {
                        LOBYTE(v23) = *((_DWORD *)v11 + 185) == 1;
                        (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v22 + 136))(v22, v23);
                      }
                    }
                    v3 = v31;
LABEL_29:
                    v8 = v30;
                    goto LABEL_30;
                  }
                  if ( !*(_DWORD *)(v14 + 316) && !*(_BYTE *)(v14 + 2404) )
                  {
                    v24 = CControlBox::GetControlByIndex(v13, 3);
                    if ( v24 )
                    {
                      LOBYTE(v25) = *((_DWORD *)v11 + 185) == 0;
                      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v24 + 136))(v24, v25);
                    }
                    v26 = CControlBox::GetControlByIndex(v13, 4);
                    if ( v26 )
                    {
                      LOBYTE(v27) = *((_DWORD *)v11 + 185) == 1;
                      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v26 + 136))(v26, v27);
                    }
                    goto LABEL_29;
                  }
                }
LABEL_30:
                v31 = ++v3;
                if ( (int)v3 >= v32 )
                  return;
                v1 = this;
              }
            }
          }
        }
      }
    }
  }
}
