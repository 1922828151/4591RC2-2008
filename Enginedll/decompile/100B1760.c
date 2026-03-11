/*
 * func-name: ?HandleMouse@CREPropertiesList@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100b1760
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100aadd0, 0x100abff0
 */

char __thiscall CREPropertiesList::HandleMouse(
        CREPropertiesList *this,
        unsigned int pvParam,
        POINT pt,
        unsigned int a4,
        int a5)
{
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  CREScrollBar *v8; // edi
  int v9; // ebp
  int v10; // edi
  int ii; // eax
  int v12; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  struct Engine *v17; // eax
  bool v18; // zf
  int v19; // eax
  void (__stdcall *v20)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD); // ecx
  int v21; // edx
  int v22; // ebp
  int v23; // ebx
  int v24; // ecx
  int v25; // eax
  int i; // ecx
  int v27; // edx
  int j; // ecx
  int v29; // edx
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  char v33; // cl
  int k; // eax
  int v35; // edx
  int m; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int n; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  void (__stdcall *v47)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD); // ecx
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  void (__stdcall *v53)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD); // ecx
  unsigned int v54; // edx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  v6 = pvParam;
  if ( pvParam == 513 && !*((_BYTE *)this + 92) )
    CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
  v7 = a4;
  v8 = (CREPropertiesList *)((char *)this + 564);
  if ( !(*(unsigned __int8 (__thiscall **)(char *, unsigned int, LONG, LONG, unsigned int, int))(*((_DWORD *)this + 141)
                                                                                               + 92))(
          (char *)this + 564,
          v6,
          pt.x,
          pt.y,
          a4,
          a5) )
  {
    v9 = 0;
    if ( *((int *)this + 306) <= 0 )
    {
LABEL_12:
      switch ( pvParam )
      {
        case 0x200u:
          if ( !*((_BYTE *)this + 1208) )
            return 0;
          v48 = *((_DWORD *)this + 298);
          if ( v48 )
            v49 = *((_DWORD *)this + 291) + (pt.y - *((_DWORD *)this + 134)) / v48;
          else
            v49 = -1;
          v50 = *((_DWORD *)this + 291);
          if ( v49 < v50 )
            goto LABEL_74;
          if ( v49 >= *((_DWORD *)this + 306) || v49 >= v50 + *((_DWORD *)this + 292) )
          {
            if ( v49 >= v50 )
            {
              if ( v49 < v50 + *((_DWORD *)this + 292) )
                return 0;
              CREScrollBar::Scroll(v8, 1);
              v51 = *((_DWORD *)this + 292) + *((_DWORD *)this + 291);
              if ( *((_DWORD *)this + 306) < v51 )
                v51 = *((_DWORD *)this + 306);
              v49 = v51 - 1;
            }
            else
            {
LABEL_74:
              CREScrollBar::Scroll(v8, -1);
              v49 = *((_DWORD *)this + 291);
            }
          }
          *((_DWORD *)this + 300) = v49;
          v52 = *((_DWORD *)this + 28);
          v53 = *(void (__stdcall **)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD))(v52 + 736);
          if ( v53 )
            v53(v52, 1794, *((_DWORD *)this + 34), this, 0, 0);
          return 0;
        case 0x201u:
        case 0x203u:
          if ( *((int *)this + 306) <= 0 || !PtInRect((const RECT *)((char *)this + 548), pt) )
            return 0;
          v14 = *((_DWORD *)this + 298);
          if ( v14 )
            v15 = *((_DWORD *)this + 291) + (pt.y - *((_DWORD *)this + 134)) / v14;
          else
            v15 = -1;
          v16 = *((_DWORD *)this + 291);
          if ( v15 < v16 || v15 >= *((_DWORD *)this + 306) || v15 >= v16 + *((_DWORD *)this + 292) )
            return 1;
          v17 = Engine::Instance();
          SetCapture(*((HWND *)v17 + 35));
          v18 = pvParam == 515;
          *((_BYTE *)this + 1208) = 1;
          if ( v18 )
          {
            v19 = *((_DWORD *)this + 28);
            v20 = *(void (__stdcall **)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD))(v19 + 736);
            if ( !v20 )
              return 1;
            v20(v19, 1793, *((_DWORD *)this + 34), this, 0, 0);
            return 1;
          }
          *((_DWORD *)this + 300) = v15;
          if ( (v7 & 4) == 0 )
            *((_DWORD *)this + 301) = v15;
          if ( (*((_BYTE *)this + 1196) & 1) != 0 )
          {
            v21 = *((_DWORD *)this + 305);
            v22 = *(_DWORD *)(v21 + 4 * v15);
            v23 = v7 & 0xC;
            switch ( v23 )
            {
              case 8:
                *(_BYTE *)(v22 + 540) = *(_BYTE *)(v22 + 540) == 0;
                break;
              case 4:
                v24 = *((_DWORD *)this + 301);
                v25 = v24;
                if ( v24 >= v15 )
                {
                  v25 = v15;
                  if ( v24 > v15 )
                    v15 = *((_DWORD *)this + 301);
                }
                for ( i = 0; i < v25; *(_BYTE *)(v27 + 540) = 0 )
                  v27 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * i++);
                for ( j = v15 + 1; j < *((_DWORD *)this + 306); *(_BYTE *)(v29 + 540) = 0 )
                  v29 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * j++);
                for ( ; v25 <= v15; *(_BYTE *)(v30 + 540) = *(_BYTE *)(v22 + 541) == 0 )
                  v30 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * v25++);
                break;
              case 12:
                v31 = *((_DWORD *)this + 301);
                v32 = v31;
                if ( v31 >= v15 )
                {
                  v32 = v15;
                  if ( v31 > v15 )
                    v15 = *((_DWORD *)this + 301);
                }
                v33 = *(_BYTE *)(*(_DWORD *)(v21 + 4 * v31) + 540);
                for ( k = v32 + 1; k < v15; *(_BYTE *)(v35 + 540) = v33 )
                  v35 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * k++);
                *(_BYTE *)(v22 + 540) = *(_BYTE *)(v22 + 541) == 0;
                *((_DWORD *)this + 300) = *((_DWORD *)this + 301);
                break;
              default:
                for ( m = 0; m < *((_DWORD *)this + 306); *(_BYTE *)(*(_DWORD *)(v22 + 512) + 92) = 0 )
                  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 305) + 4 * m++) + 540) = 0;
                CREDialog::RequestFocus(*((CREDialog **)this + 28), *(struct CREControl **)(v22 + 512));
                *(_BYTE *)(v22 + 540) = *(_BYTE *)(v22 + 541) == 0;
                break;
            }
          }
LABEL_64:
          v46 = *((_DWORD *)this + 28);
          v47 = *(void (__stdcall **)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD))(v46 + 736);
          if ( v47 )
          {
            v47(v46, 1794, *((_DWORD *)this + 34), this, 0, 0);
            return 1;
          }
          break;
        case 0x202u:
          ReleaseCapture();
          v37 = *((_DWORD *)this + 300);
          *((_BYTE *)this + 1208) = 0;
          if ( v37 == -1 )
            return 1;
          v38 = *((_DWORD *)this + 301);
          v39 = v38;
          if ( v38 <= v37 )
          {
            v39 = v37;
            if ( v38 < v37 )
              v37 = *((_DWORD *)this + 301);
          }
          for ( n = v37 + 1; n < v39; *(_BYTE *)(v43 + 540) = *(_BYTE *)(v42 + 540) )
          {
            v41 = *((_DWORD *)this + 305);
            v42 = *(_DWORD *)(v41 + 4 * *((_DWORD *)this + 301));
            v43 = *(_DWORD *)(v41 + 4 * n++);
          }
          v44 = *((_DWORD *)this + 305);
          v45 = *(_DWORD *)(v44 + 4 * *((_DWORD *)this + 300));
          if ( !*(_BYTE *)(v45 + 541) )
            *(_BYTE *)(v45 + 540) = *(_BYTE *)(*(_DWORD *)(v44 + 4 * *((_DWORD *)this + 301)) + 540);
          CREDialog::RequestFocus(
            *((CREDialog **)this + 28),
            *(struct CREControl **)(*(_DWORD *)(*((_DWORD *)this + 305) + 4 * *((_DWORD *)this + 300)) + 512));
          if ( *((_DWORD *)this + 301) == *((_DWORD *)this + 300) )
            return 1;
          goto LABEL_64;
        case 0x20Au:
          SystemParametersInfoW(0x68u, 0, &pvParam, 0);
          v54 = (int)(((unsigned __int64)(2004318071LL * SHIWORD(v7)) >> 32) - SHIWORD(v7)) >> 6;
          CREScrollBar::Scroll(v8, pvParam * (v54 + (v54 >> 31)));
          return 1;
        default:
          return 0;
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * v9);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int, LONG, LONG, unsigned int, int))(**(_DWORD **)(v10 + 512) + 92))(
               *(_DWORD *)(v10 + 512),
               pvParam,
               pt.x,
               pt.y,
               v7,
               a5) )
        {
          break;
        }
        if ( ++v9 >= *((_DWORD *)this + 306) )
        {
          v8 = (CREPropertiesList *)((char *)this + 564);
          goto LABEL_12;
        }
      }
      if ( !*(_BYTE *)(v10 + 541) )
      {
        for ( ii = 0; ii < *((_DWORD *)this + 306); *(_BYTE *)(v12 + 540) = 0 )
          v12 = *(_DWORD *)(*((_DWORD *)this + 305) + 4 * ii++);
        CREPropertiesList::SelectItem(this, v9);
      }
    }
  }
  return 1;
}
