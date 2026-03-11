/*
 * func-name: ?UpdateHUD@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10172960
 * callers: 0x10019777
 * callees: 0x10001dfc, 0x100137ff
 */

void __thiscall GameClient::Robot::UpdateHUD(GameClient::Robot *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  GameClient::Skill *v6; // eax
  float *v7; // ecx
  double v8; // st7
  double v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+Ch] [ebp-8h]

  v2 = *((_DWORD *)this + 372);
  if ( !v2 )
    return;
  if ( *((_DWORD *)this + 70) == -1 )
    goto LABEL_9;
  v3 = sub_10001DFC(*((_DWORD *)this + 70));
  if ( !v3 || !*(_BYTE *)(v3 + 116) )
  {
    v2 = *((_DWORD *)this + 372);
LABEL_9:
    *(_BYTE *)(v2 + 5) = 0;
    if ( *((_DWORD *)this + 336)
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 336) + 40))(*((_DWORD *)this + 336)) )
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 336) + 44))(*((_DWORD *)this + 336));
    }
    goto LABEL_12;
  }
  *(_BYTE *)(*((_DWORD *)this + 372) + 5) = 1;
  if ( *((_DWORD *)this + 336)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 336) + 40))(*((_DWORD *)this + 336)) )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 336) + 36))(0, 0.75);
  }
LABEL_12:
  *(_DWORD *)(*((_DWORD *)this + 372) + 12) = *((_DWORD *)this + 165);
  *(_BYTE *)(*((_DWORD *)this + 372) + 8) = *((int *)this + 165) > 1 || *((_DWORD *)this + 70) != -1;
  *(_BYTE *)(*((_DWORD *)this + 372) + 6) = *((int *)this + 165) > 1 && !*((_DWORD *)this + 57);
  if ( *((_DWORD *)this + 57) )
  {
    *(_BYTE *)(*((_DWORD *)this + 372) + 7) = 0;
    v4 = *(_DWORD *)(*((_DWORD *)this + 57) + 176);
    if ( v4 )
      *(float *)(v4 + 16) = *((float *)this + 103);
  }
  else
  {
    *(float *)(*((_DWORD *)this + 372) + 16) = *((float *)this + 75);
    *(_BYTE *)(*((_DWORD *)this + 372) + 7) = (*((_DWORD *)this + 92) & 0x20) == 0;
    *(_DWORD *)(*((_DWORD *)this + 372) + 28) = -926365496;
  }
  if ( *((_DWORD *)this + 90)
    || (v5 = *((_DWORD *)this + 54), v5 == -1)
    || !*((_DWORD *)this + v5 + 55)
    || (v6 = (GameClient::Skill *)*((_DWORD *)this + v5 + 55), *((_DWORD *)v6 + 4))
    || GameClient::Skill::GetMaxStartupTime(v6) <= 0.0 )
  {
    *(_BYTE *)(*((_DWORD *)this + 372) + 10) = 0;
  }
  else
  {
    *(_BYTE *)(*((_DWORD *)this + 372) + 10) = 1;
    v7 = (float *)*((_DWORD *)this + *((_DWORD *)this + 54) + 55);
    v9 = v7[14];
    v10 = v9 / GameClient::Skill::GetMaxStartupTime((GameClient::Skill *)v7);
    v8 = 0.0;
    if ( v10 < 0.0 || (v8 = 1.0, v10 > 1.0) )
    {
      v11 = v8;
      *(float *)(*((_DWORD *)this + 372) + 20) = v11;
    }
    else
    {
      *(float *)(*((_DWORD *)this + 372) + 20) = v10;
    }
  }
  *(float *)(*((_DWORD *)this + 372) + 24) = *((float *)this + 103);
}
