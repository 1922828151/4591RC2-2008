/*
 * func-name: ?HandleMouse@CREComboBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100b03f0
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a3100, 0x100aadd0
 */

char __thiscall CREComboBox::HandleMouse(CREComboBox *this, unsigned int pvParam, POINT pt, unsigned int a4, int a5)
{
  LONG x; // ebx
  LONG y; // ebp
  __int16 v8; // edi^2
  int i; // edi
  int v10; // eax
  struct Engine *v12; // eax
  char v13; // al
  bool v14; // zf
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  void (__stdcall *v19)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx
  int v20; // eax
  int v21; // eax
  void (__stdcall *v22)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  void (__stdcall *v28)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx

  if ( *((_BYTE *)this + 156) && *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    x = pt.x;
    y = pt.y;
    v8 = HIWORD(a4);
    if ( !*((_BYTE *)this + 1448)
      || !(*(unsigned __int8 (__thiscall **)(char *, unsigned int, LONG, LONG, unsigned int, int))(*((_DWORD *)this + 207)
                                                                                                 + 92))(
            (char *)this + 828,
            pvParam,
            pt.x,
            pt.y,
            a4,
            a5) )
    {
      switch ( pvParam )
      {
        case 0x200u:
          if ( !*((_BYTE *)this + 1448) || !PtInRect((const RECT *)this + 93, (POINT)__PAIR64__(y, x)) )
            return 0;
          for ( i = 0; i < *((_DWORD *)this + 381); ++i )
          {
            v10 = *(_DWORD *)(*((_DWORD *)this + 380) + 4 * i);
            if ( *(_BYTE *)(v10 + 532) )
            {
              if ( PtInRect((const RECT *)(v10 + 516), (POINT)__PAIR64__(y, x)) )
                *((_DWORD *)this + 205) = i;
            }
          }
          return 1;
        case 0x201u:
        case 0x203u:
          if ( !(*(int (__thiscall **)(CREComboBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, x, y) )
          {
            if ( *((_BYTE *)this + 1448) )
            {
              if ( PtInRect((const RECT *)this + 93, (POINT)__PAIR64__(y, x)) )
              {
                v16 = *((_DWORD *)this + 357);
                if ( v16 < *((_DWORD *)this + 381) )
                {
                  while ( 1 )
                  {
                    v17 = *(_DWORD *)(*((_DWORD *)this + 380) + 4 * v16);
                    if ( *(_BYTE *)(v17 + 532) )
                    {
                      if ( PtInRect((const RECT *)(v17 + 516), (POINT)__PAIR64__(y, x)) )
                        break;
                    }
                    if ( ++v16 >= *((_DWORD *)this + 381) )
                      goto LABEL_36;
                  }
                  v18 = *((_DWORD *)this + 28);
                  *((_DWORD *)this + 204) = v16;
                  *((_DWORD *)this + 205) = v16;
                  v19 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v18 + 736);
                  if ( v19 )
                    v19(v18, 513, *((_DWORD *)this + 34), this, 0, 0);
                  v20 = *((_DWORD *)this + 28);
                  *((_BYTE *)this + 1448) = 0;
                  if ( !*(_BYTE *)(v20 + 85) )
                    CREDialog::ClearFocus();
                }
LABEL_36:
                v15 = *((_DWORD *)this + 18);
                if ( v15 )
                {
LABEL_24:
                  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v15 + 36))(0, *((float *)this + 40));
                  return 1;
                }
                return 1;
              }
              if ( *((_BYTE *)this + 1448) )
              {
                v21 = *((_DWORD *)this + 28);
                *((_DWORD *)this + 205) = *((_DWORD *)this + 204);
                v22 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v21 + 736);
                if ( v22 )
                  v22(v21, 513, *((_DWORD *)this + 34), this, 0, 0);
                *((_BYTE *)this + 1448) = 0;
              }
            }
            v23 = *((_DWORD *)this + 28);
            *((_BYTE *)this + 779) = 0;
            if ( !*(_BYTE *)(v23 + 85) )
              CREDialog::ClearFocus();
            return 0;
          }
          *((_BYTE *)this + 779) = 1;
          v12 = Engine::Instance();
          SetCapture(*((HWND *)v12 + 35));
          if ( *((_BYTE *)this + 92)
            || (CREDialog::RequestFocus(*((CREDialog **)this + 28), this), *((_BYTE *)this + 92)) )
          {
            v13 = *((_BYTE *)this + 1448) == 0;
            v14 = *((_BYTE *)this + 1448) != 0;
            *((_BYTE *)this + 1448) = v13;
            if ( v14 )
            {
              if ( *(_BYTE *)(*((_DWORD *)this + 28) + 85) == v13 )
                CREDialog::ClearFocus();
              v15 = *((_DWORD *)this + 19);
            }
            else
            {
              v15 = *((_DWORD *)this + 363);
            }
            if ( v15 )
              goto LABEL_24;
          }
          break;
        case 0x202u:
          if ( !*((_BYTE *)this + 779)
            || !(*(int (__thiscall **)(CREComboBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, x, y) )
          {
            return 0;
          }
          *((_BYTE *)this + 779) = 0;
          ReleaseCapture();
          return 1;
        case 0x20Au:
          v24 = v8 / 120;
          if ( *((_BYTE *)this + 1448) )
          {
            SystemParametersInfoW(0x68u, 0, &pvParam, 0);
            CREScrollBar::Scroll((CREComboBox *)((char *)this + 828), -(v24 * pvParam));
            return 1;
          }
          v25 = *((_DWORD *)this + 205);
          if ( v24 <= 0 )
          {
            v26 = v25 + 1;
            if ( v26 >= *((_DWORD *)this + 381) )
              return 1;
          }
          else
          {
            if ( v25 <= 0 )
              return 1;
            v26 = v25 - 1;
          }
          *((_DWORD *)this + 205) = v26;
          *((_DWORD *)this + 204) = v26;
          v27 = *((_DWORD *)this + 28);
          v28 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v27 + 736);
          if ( !v28 )
            return 1;
          v28(v27, 513, *((_DWORD *)this + 34), this, 0, 0);
          return 1;
        default:
          return 0;
      }
    }
    return 1;
  }
  return 0;
}
