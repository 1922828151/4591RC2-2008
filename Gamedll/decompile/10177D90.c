/*
 * func-name: ?SubmitLeadingSkill@Robot@GameClient@@QAEXH_N@Z_0
 * func-address: 0x10177d90
 * callers: 0x1000b15e
 * callees: none
 */

void __thiscall GameClient::Robot::SubmitLeadingSkill(GameClient::Robot *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  if ( *((_DWORD *)this + a2 + 55) && ((*((_DWORD *)this + 92) & 0x40) == 0 || a2 == *((_DWORD *)this + 54)) )
  {
    if ( (_BYTE)a3 )
    {
      if ( (*((_DWORD *)this + 92) & 0x40) == 0 )
      {
        v4 = *((_DWORD *)this + 54);
        if ( v4 != -1 )
        {
          if ( *((_DWORD *)this + v4 + 55) )
          {
            (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + v4 + 55) + 48))(*((_DWORD *)this + v4 + 55));
            *((_DWORD *)this + 53) = 0;
            *((_DWORD *)this + 54) = -1;
          }
        }
      }
    }
    else if ( *((_DWORD *)this + 54) == -1 )
    {
      return;
    }
    v5 = (*(int (__thiscall **)(_DWORD, GameClient::Robot *, int))(**((_DWORD **)this + a2 + 55) + 40))(
           *((_DWORD *)this + a2 + 55),
           this,
           a3);
    if ( v5 )
    {
      if ( v5 == 3 && (*((_DWORD *)this + 92) & 0x40) == 0 )
      {
        *((_DWORD *)this + 54) = -1;
        *((_DWORD *)this + 53) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 54) = a2;
      *((_DWORD *)this + 53) = *((_DWORD *)this + a2 + 55);
    }
  }
}
