/*
 * func-name: ?MsgProc@CREDialog@@UAE_NPAUHWND__@@IIJ@Z
 * func-address: 0x100afae0
 * callers: none
 * callees: 0x100971c0, 0x100a99f0, 0x100a9a80, 0x100a9cd0, 0x100a9d20, 0x100d5bd0, 0x100d6d20, 0x101189f0, 0x101a26c0
 */

bool __thiscall CREDialog::MsgProc(CREDialog *this, HWND a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v7; // ebp
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  bool v10; // zf
  bool result; // al
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // ebp
  int v14; // edi
  int (__thiscall *v15)(struct RenderDevice *); // eax
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  struct Engine *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // edi
  int v22; // ebx
  int v23; // edx
  CREDialog **v24; // ecx
  unsigned int v25; // edi
  int v26; // eax
  int v27; // eax
  struct CREControl **i; // ecx
  struct CREControl *v29; // edi
  SHORT AsyncKeyState; // ax
  GUISystem *v31; // eax
  LONG v32; // ecx
  LONG v33; // eax
  struct CREControl *ControlAtPoint; // edi
  CREDialog **v35; // ecx
  void (__stdcall *v36)(CREDialog *, int, _DWORD, _DWORD, unsigned int, int); // eax
  struct tagPOINT v37; // [esp+28h] [ebp-8h] BYREF
  float y; // [esp+38h] [ebp+8h]
  float v39; // [esp+3Ch] [ebp+Ch]
  float v40; // [esp+3Ch] [ebp+Ch]
  float v41; // [esp+40h] [ebp+10h]
  float v42; // [esp+40h] [ebp+10h]

  if ( !*((_BYTE *)this + 176) )
  {
LABEL_12:
    v7 = a3;
    goto LABEL_13;
  }
  v7 = a3;
  if ( a3 == 513 || a3 == 515 )
  {
    v37.x = (__int16)a5;
    v37.y = SHIWORD(a5);
    v12 = RenderDevice::Instance();
    v41 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 296))(v12) * 0.0009765625;
    v13 = RenderDevice::Instance();
    v14 = (int)((double)v37.x / v41);
    v15 = *(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 300);
    *(float *)&v37.x = (float)v37.y;
    v42 = (double)v15(v13) / 768.0;
    v16 = (int)(*(float *)&v37.x / v42);
    v17 = *((_DWORD *)this + 173);
    v18 = *((_DWORD *)this + 174);
    *((_DWORD *)this + 16) = v14;
    *((_DWORD *)this + 17) = v16;
    *((_DWORD *)this + 18) = v17;
    *((_DWORD *)this + 19) = v18;
    if ( v14 >= v17 && v14 < v17 + *((_DWORD *)this + 175) && v16 >= v18 && v16 < v18 + *((_DWORD *)this + 177) )
    {
      *((_BYTE *)this + 60) = 1;
      v19 = Engine::Instance();
      SetCapture(*((HWND *)v19 + 35));
      return 1;
    }
    goto LABEL_12;
  }
  if ( a3 == 514 )
  {
    v8 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v8 + 296))(v8);
    v9 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v9 + 300))(v9);
    ReleaseCapture();
    v10 = *((_BYTE *)this + 60) == 0;
    *((_BYTE *)this + 60) = 0;
    if ( !v10 )
      return 1;
    goto LABEL_17;
  }
LABEL_13:
  if ( v7 == 512 && *((_BYTE *)this + 60) && *((_BYTE *)this + 61) )
  {
    v37.x = (__int16)a5;
    v37.y = SHIWORD(a5);
    v20 = RenderDevice::Instance();
    v39 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v20 + 296))(v20) * 0.0009765625;
    v21 = RenderDevice::Instance();
    v22 = (int)((double)(__int16)a5 / v39);
    y = (float)v37.y;
    v40 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v21 + 300))(v21) / 768.0;
    v23 = (int)(y / v40) + *((_DWORD *)this + 19) - *((_DWORD *)this + 17);
    *((_DWORD *)this + 173) = v22 + *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
    *((_DWORD *)this + 174) = v23;
    return 1;
  }
LABEL_17:
  if ( *((_BYTE *)this + 177) )
    return 0;
  v24 = (CREDialog **)CREDialog::s_pControlFocus;
  if ( CREDialog::s_pControlFocus && *((CREDialog **)CREDialog::s_pControlFocus + 28) == this )
  {
    v25 = a4;
    if ( (*(unsigned __int8 (**)(void))(*(_DWORD *)CREDialog::s_pControlFocus + 132))()
      && (*(unsigned __int8 (__thiscall **)(struct CREControl *, unsigned int, unsigned int, int))(*(_DWORD *)CREDialog::s_pControlFocus
                                                                                                 + 84))(
           CREDialog::s_pControlFocus,
           v7,
           a4,
           a5) )
    {
      goto LABEL_22;
    }
    v24 = (CREDialog **)CREDialog::s_pControlFocus;
  }
  else
  {
    v25 = a4;
  }
  if ( v7 <= 0x209 )
  {
    if ( v7 < 0x200 )
    {
      switch ( v7 )
      {
        case 0x1Cu:
          if ( !v24 || v24[28] != this || !(*((unsigned __int8 (__thiscall **)(CREDialog **))*v24 + 33))(v24) )
            return *((_BYTE *)this + 60) != 0;
          v26 = *(_DWORD *)CREDialog::s_pControlFocus;
          if ( v25 )
            (*(void (**)(void))(v26 + 100))();
          else
            (*(void (**)(void))(v26 + 104))();
          return *((_BYTE *)this + 60) != 0;
        case 0x100u:
        case 0x101u:
        case 0x104u:
        case 0x105u:
          if ( !v24 || v24[28] != this )
            goto LABEL_40;
          if ( (*((unsigned __int8 (__thiscall **)(CREDialog **))*v24 + 33))(v24)
            && (*(unsigned __int8 (__thiscall **)(struct CREControl *, unsigned int, unsigned int, int))(*(_DWORD *)CREDialog::s_pControlFocus + 88))(
                 CREDialog::s_pControlFocus,
                 v7,
                 v25,
                 a5) )
          {
            goto LABEL_22;
          }
          v24 = (CREDialog **)CREDialog::s_pControlFocus;
LABEL_40:
          if ( v7 == 257 )
          {
            v27 = 0;
            if ( *((int *)this + 192) <= 0 )
              return *((_BYTE *)this + 60) != 0;
            for ( i = (struct CREControl **)*((_DWORD *)this + 191); ; ++i )
            {
              v29 = *i;
              if ( *((_DWORD *)*i + 36) == a4 )
                break;
              if ( ++v27 >= *((_DWORD *)this + 192) )
                return *((_BYTE *)this + 60) != 0;
            }
            (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v29 + 120))(*i);
            CREDialog::s_pControlLast = v29;
            return 1;
          }
          if ( v7 != 256 )
            return *((_BYTE *)this + 60) != 0;
          if ( *((_BYTE *)this + 85) )
          {
            switch ( v25 )
            {
              case 9u:
                if ( v24 )
                {
                  AsyncKeyState = GetAsyncKeyState(16);
                  CREDialog::OnCycleFocus(this, (AsyncKeyState & 0x8000) == 0);
                }
                else
                {
                  CREDialog::FocusDefaultControl(this);
                }
                result = 1;
                break;
              case 0x25u:
              case 0x26u:
                if ( !v24 )
                  return *((_BYTE *)this + 60) != 0;
                CREDialog::OnCycleFocus(this, 0);
                result = 1;
                break;
              case 0x27u:
              case 0x28u:
                if ( !v24 )
                  return *((_BYTE *)this + 60) != 0;
                CREDialog::OnCycleFocus(this, 1);
                result = 1;
                break;
              default:
                return *((_BYTE *)this + 60) != 0;
            }
            return result;
          }
          break;
        default:
          return *((_BYTE *)this + 60) != 0;
      }
      return 0;
    }
    goto LABEL_60;
  }
  if ( v7 == 522 )
  {
    v36 = (void (__stdcall *)(CREDialog *, int, _DWORD, _DWORD, unsigned int, int))*((_DWORD *)this + 184);
    if ( v36 )
      v36(this, 522, 0, 0, v25, a5);
    return *((_BYTE *)this + 60) != 0;
  }
  if ( v7 <= 0x20D )
  {
LABEL_60:
    if ( *((_BYTE *)this + 86) )
    {
      v31 = GUISystem::Instance();
      GUISystem::GetLogicMousePos(v31, &v37);
      v32 = v37.x - *((_DWORD *)this + 173);
      v33 = v37.y - *((_DWORD *)this + 174);
      v10 = *((_BYTE *)this + 176) == 0;
      v37.x = v32;
      v37.y = v33;
      if ( !v10 )
      {
        v33 -= *((_DWORD *)this + 177);
        v37.y = v33;
      }
      ControlAtPoint = CREDialog::GetControlAtPoint(this, (struct tagPOINT)__PAIR64__(v33, v32));
      if ( ControlAtPoint
        && (*(unsigned __int8 (__thiscall **)(struct CREControl *))(*(_DWORD *)ControlAtPoint + 132))(ControlAtPoint) )
      {
        v35 = (CREDialog **)CREDialog::s_pControlFocus;
        if ( !CREDialog::s_pControlFocus
          || *((_DWORD *)ControlAtPoint + 131) > *((_DWORD *)CREDialog::s_pControlFocus + 131) )
        {
          goto LABEL_74;
        }
      }
      else
      {
        v35 = (CREDialog **)CREDialog::s_pControlFocus;
      }
      if ( !v35 )
        goto LABEL_74;
      if ( (*((unsigned __int8 (__thiscall **)(CREDialog **))*v35 + 33))(v35) )
      {
        v35 = (CREDialog **)CREDialog::s_pControlFocus;
        if ( *((CREDialog **)CREDialog::s_pControlFocus + 28) != this )
          goto LABEL_74;
        if ( (*(unsigned __int8 (__thiscall **)(struct CREControl *, unsigned int, LONG, LONG, unsigned int, int))(*(_DWORD *)CREDialog::s_pControlFocus + 92))(
               CREDialog::s_pControlFocus,
               v7,
               v37.x,
               v37.y,
               a4,
               a5) )
        {
LABEL_22:
          CREDialog::s_pControlLast = CREDialog::s_pControlFocus;
          return 1;
        }
      }
      v35 = (CREDialog **)CREDialog::s_pControlFocus;
LABEL_74:
      if ( ControlAtPoint )
      {
        if ( (*(unsigned __int8 (__thiscall **)(struct CREControl *))(*(_DWORD *)ControlAtPoint + 132))(ControlAtPoint) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(struct CREControl *, unsigned int, LONG, LONG, unsigned int, int))(*(_DWORD *)ControlAtPoint + 92))(
                 ControlAtPoint,
                 v7,
                 v37.x,
                 v37.y,
                 a4,
                 a5) )
          {
            CREDialog::s_pControlLast = ControlAtPoint;
            return 1;
          }
LABEL_83:
          if ( v7 == 512 )
          {
            CREDialog::OnMouseMove((struct CREControl **)this, v37);
            return 0;
          }
          return *((_BYTE *)this + 60) != 0;
        }
        v35 = (CREDialog **)CREDialog::s_pControlFocus;
      }
      if ( v7 == 513 )
      {
        if ( v35 && v35[28] == this )
        {
          (*((void (__thiscall **)(CREDialog **))*v35 + 26))(v35);
          CREDialog::s_pControlFocus = 0;
          return *((_BYTE *)this + 60) != 0;
        }
        return *((_BYTE *)this + 60) != 0;
      }
      goto LABEL_83;
    }
    return 0;
  }
  return *((_BYTE *)this + 60) != 0;
}
