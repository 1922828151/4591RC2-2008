/*
 * func-name: ?RefreshVehicleSeat@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028b690
 * callers: 0x100141cd
 * callees: 0x1000290a, 0x10009d68, 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ed13, 0x102c8d6c
 */

void __thiscall CStatusUI::RefreshVehicleSeat(CStatusUI *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // edx
  GameClient::EstabManager *v5; // eax
  struct GameClient::Establishment *Establishment; // eax
  GameClient::Establishment *v7; // edx
  int v8; // eax
  struct GameClient::Seat *Seat; // ebx
  int v10; // ecx
  CREStatic *ControlByIndex; // esi
  GameClient::RobotManager *v12; // eax
  struct GameClient::Robot *Robot; // eax
  int v14; // eax
  const char *v15; // eax
  int v16; // [esp-Ch] [ebp-1Ch]
  const wchar_t *v17; // [esp-Ch] [ebp-1Ch]
  unsigned int v18; // [esp-4h] [ebp-14h]
  int v19; // [esp+8h] [ebp-8h]
  struct GameClient::Establishment *v20; // [esp+Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 973);
  v3 = 0;
  if ( v2 )
  {
    if ( (*((_DWORD *)this + 974) - v2) >> 2 )
    {
      v4 = *((_DWORD *)this + 1004);
      if ( *(_DWORD *)(v4 + 280) != -1 )
      {
        v18 = *(_DWORD *)(v4 + 280);
        v5 = GameClient::EstabManager::Instance();
        Establishment = GameClient::EstabManager::GetEstablishment(v5, v18);
        v7 = Establishment;
        v20 = Establishment;
        if ( Establishment )
        {
          v8 = *((_DWORD *)Establishment + 49);
          v19 = v8 ? (*((_DWORD *)v7 + 50) - v8) >> 2 : 0;
          if ( v19 > 0 )
          {
            while ( 1 )
            {
              Seat = GameClient::Establishment::GetSeat(v7, v3);
              if ( Seat )
              {
                v10 = *((_DWORD *)this + 973);
                if ( !v10 || v3 >= (*((_DWORD *)this + 974) - v10) >> 2 )
                  _invalid_parameter_noinfo();
                ControlByIndex = CControlBox::GetControlByIndex(*(CControlBox **)(*((_DWORD *)this + 973) + 4 * v3), 2);
                if ( ControlByIndex )
                {
                  if ( *((_DWORD *)Seat + 19) == -1 )
                  {
                    CREStatic::SetText(ControlByIndex, word_103235BC);
                  }
                  else
                  {
                    v16 = *((_DWORD *)Seat + 19);
                    v12 = GameClient::RobotManager::Instance();
                    Robot = GameClient::RobotManager::GetRobot(v12, v16);
                    if ( Robot )
                    {
                      v14 = sub_10009D68(*((_DWORD *)Robot + 4));
                      if ( v14 )
                      {
                        v15 = (const char *)std::string::c_str(v14 + 8);
                        v17 = atow(v15);
                        CREStatic::SetText(ControlByIndex, v17);
                      }
                      else
                      {
                        CREStatic::SetText(ControlByIndex, word_103235C0);
                      }
                    }
                  }
                }
              }
              if ( (int)++v3 >= v19 )
                break;
              v7 = v20;
            }
          }
        }
      }
    }
  }
}
