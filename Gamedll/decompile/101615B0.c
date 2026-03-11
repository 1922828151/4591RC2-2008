/*
 * func-name: ?UpdateInput@Item@GameClient@@UAEXXZ_0
 * func-address: 0x101615b0
 * callers: 0x10012eea
 * callees: 0x1000516e, 0x10013d13, 0x1001a019
 */

void __thiscall GameClient::Item::UpdateInput(GameClient::Item *this)
{
  int v1; // eax
  int v3; // edx
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  Game *v7; // eax
  bool HasAnyGUIopen; // bl
  Input *v9; // eax
  GameClient::Robot *v10; // ecx
  Input *v11; // eax
  int v12; // eax
  GameClient::Robot *v13; // ecx
  Input *v14; // eax
  Input *v15; // eax
  int v16; // eax

  v1 = dword_103B67B4;
  if ( (dword_103B6060 & 1) == 0 )
  {
    v3 = *(_DWORD *)(dword_103B67B4 + 8);
    dword_103B6060 |= 1u;
    v4 = dword_103B67B4 + 8;
    if ( !v3 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2) <= 0x42 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B605C = *(_DWORD *)(*(_DWORD *)v4 + 264);
  }
  if ( (dword_103B6060 & 2) == 0 )
  {
    dword_103B6060 |= 2u;
    v5 = *(_DWORD *)(v1 + 8);
    v6 = v1 + 8;
    if ( !v5 || (unsigned int)((*(_DWORD *)(v1 + 12) - v5) >> 2) <= 0x43 )
      _invalid_parameter_noinfo();
    dword_103B6058 = *(_DWORD *)(*(_DWORD *)v6 + 268);
  }
  v7 = Game::Instance();
  HasAnyGUIopen = Game::HasAnyGUIopen(v7);
  if ( HasAnyGUIopen
    || (v9 = (Input *)Input::Instance(dword_103B605C), !Input::ControlJustPressed(v9))
    || (v10 = (GameClient::Robot *)*((_DWORD *)this + 37)) == 0
    || !*((_BYTE *)v10 + 700)
    || !GameClient::Robot::CanUseItem(v10) )
  {
    if ( !*((_DWORD *)this + 194) )
    {
      v11 = (Input *)Input::Instance(dword_103B605C);
      if ( Input::ControlDown(v11) && !HasAnyGUIopen )
      {
        v12 = *((_DWORD *)this + 37);
        if ( v12 )
        {
          if ( *(_BYTE *)(v12 + 700) )
            goto LABEL_27;
        }
      }
      if ( *((_DWORD *)this + 192) && *((_DWORD *)this + 194) != -1 )
        (*(void (__thiscall **)(_DWORD, GameClient::Item *, _DWORD))(**((_DWORD **)this + 192) + 40))(
          *((_DWORD *)this + 192),
          this,
          0);
    }
    if ( HasAnyGUIopen )
      goto LABEL_32;
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 192) )
    (*(void (__thiscall **)(_DWORD, GameClient::Item *, int))(**((_DWORD **)this + 192) + 40))(
      *((_DWORD *)this + 192),
      this,
      1);
LABEL_27:
  v13 = (GameClient::Robot *)*((_DWORD *)this + 37);
  if ( v13 )
  {
    if ( GameClient::Robot::CanUseItem(v13) )
    {
      v14 = (Input *)Input::Instance(dword_103B6058);
      if ( Input::ControlJustPressed(v14) )
      {
        if ( *((_DWORD *)this + 193) )
          (*(void (__thiscall **)(_DWORD, GameClient::Item *, int))(**((_DWORD **)this + 193) + 40))(
            *((_DWORD *)this + 193),
            this,
            1);
        goto LABEL_40;
      }
    }
  }
LABEL_32:
  if ( *((_DWORD *)this + 194) == 1 )
  {
    v15 = (Input *)Input::Instance(dword_103B6058);
    if ( (!Input::ControlDown(v15) || HasAnyGUIopen || (v16 = *((_DWORD *)this + 37)) == 0 || !*(_BYTE *)(v16 + 700))
      && *((_DWORD *)this + 193)
      && *((_DWORD *)this + 194) != -1 )
    {
      (*(void (__thiscall **)(_DWORD, GameClient::Item *, _DWORD))(**((_DWORD **)this + 193) + 40))(
        *((_DWORD *)this + 193),
        this,
        0);
    }
  }
LABEL_40:
  GameClient::Equip::UpdateInput(this);
}
