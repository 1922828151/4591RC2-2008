/*
 * func-name: ?HandleMouse@CREListBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100b0e50
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a3100, 0x100aadd0
 */

bool __thiscall CREListBox::HandleMouse(CREListBox *this, unsigned int pvParam, POINT pt, unsigned int a4, int a5)
{
  LONG y; // ebp
  int v7; // ecx
  unsigned int v8; // ebx
  bool result; // al
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  struct Engine *v13; // eax
  bool v14; // zf
  int v15; // eax
  void (__stdcall *v16)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD); // ecx
  int v17; // ecx
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int i; // eax
  int v23; // edx
  int j; // eax
  int v25; // edx
  int k; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  char v30; // cl
  int m; // eax
  int v32; // edx
  int n; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int ii; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  void (__stdcall *v43)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD); // ecx
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  void (__stdcall *v49)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD); // ecx
  unsigned int v50; // edx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  y = pt.y;
  if ( pvParam == 513 )
  {
    if ( *((_BYTE *)this + 92)
      || !(*(int (__thiscall **)(CREListBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, pt.x, pt.y) )
    {
      CREDialog::ClearFocus();
      return 0;
    }
    CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
    v7 = *((_DWORD *)this + 18);
    if ( v7 && *((_BYTE *)this + 92) )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 36))(0, *((float *)this + 40));
  }
  v8 = a4;
  if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int, LONG, LONG, unsigned int, int))(*((_DWORD *)this + 141)
                                                                                              + 92))(
         (char *)this + 564,
         pvParam,
         pt.x,
         y,
         a4,
         a5) )
  {
    return 1;
  }
  switch ( pvParam )
  {
    case 0x200u:
      if ( !*((_BYTE *)this + 1208) )
        return 0;
      v44 = *((_DWORD *)this + 298);
      if ( v44 )
        v45 = *((_DWORD *)this + 291) + (y - *((_DWORD *)this + 134)) / v44;
      else
        v45 = -1;
      v46 = *((_DWORD *)this + 291);
      if ( v45 < v46 )
        goto LABEL_68;
      if ( v45 >= *((_DWORD *)this + 304) || v45 >= v46 + *((_DWORD *)this + 292) )
      {
        if ( v45 >= v46 )
        {
          if ( v45 < v46 + *((_DWORD *)this + 292) )
            return 0;
          CREScrollBar::Scroll((CREListBox *)((char *)this + 564), 1);
          v47 = *((_DWORD *)this + 292) + *((_DWORD *)this + 291);
          if ( *((_DWORD *)this + 304) < v47 )
            v47 = *((_DWORD *)this + 304);
          v45 = v47 - 1;
        }
        else
        {
LABEL_68:
          CREScrollBar::Scroll((CREListBox *)((char *)this + 564), -1);
          v45 = *((_DWORD *)this + 291);
        }
      }
      *((_DWORD *)this + 300) = v45;
      v48 = *((_DWORD *)this + 28);
      v49 = *(void (__stdcall **)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD))(v48 + 736);
      if ( v49 )
        v49(v48, 1794, *((_DWORD *)this + 34), this, 0, 0);
      return 0;
    case 0x201u:
    case 0x203u:
      if ( *((int *)this + 304) <= 0 || !PtInRect((const RECT *)((char *)this + 548), (POINT)__PAIR64__(y, pt.x)) )
        return 0;
      v10 = *((_DWORD *)this + 298);
      if ( v10 )
        v11 = *((_DWORD *)this + 291) + (y - *((_DWORD *)this + 134)) / v10;
      else
        v11 = -1;
      v12 = *((_DWORD *)this + 291);
      if ( v11 < v12 || v11 >= *((_DWORD *)this + 304) || v11 >= v12 + *((_DWORD *)this + 292) )
        return 1;
      v13 = Engine::Instance();
      SetCapture(*((HWND *)v13 + 35));
      v14 = pvParam == 515;
      *((_BYTE *)this + 1208) = 1;
      if ( !v14 )
      {
        *((_DWORD *)this + 300) = v11;
        if ( (v8 & 4) == 0 )
          *((_DWORD *)this + 301) = v11;
        if ( (*((_BYTE *)this + 1196) & 1) != 0 )
        {
          v17 = *((_DWORD *)this + 303);
          v18 = *(_DWORD *)(v17 + 4 * v11);
          v19 = v8 & 0xC;
          switch ( v19 )
          {
            case 8:
              *(_BYTE *)(v18 + 532) = *(_BYTE *)(v18 + 532) == 0;
              break;
            case 4:
              v20 = *((_DWORD *)this + 301);
              v21 = v20;
              if ( v20 >= v11 )
              {
                v21 = v11;
                if ( v20 > v11 )
                  v11 = *((_DWORD *)this + 301);
              }
              for ( i = 0; i < v21; *(_BYTE *)(v23 + 532) = 0 )
                v23 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * i++);
              for ( j = v11 + 1; j < *((_DWORD *)this + 304); *(_BYTE *)(v25 + 532) = 0 )
                v25 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * j++);
              for ( k = v21; k <= v11; *(_BYTE *)(v27 + 532) = 1 )
                v27 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * k++);
              break;
            case 12:
              v28 = *((_DWORD *)this + 301);
              v29 = v28;
              if ( v28 >= v11 )
              {
                v29 = v11;
                if ( v28 > v11 )
                  v11 = *((_DWORD *)this + 301);
              }
              v30 = *(_BYTE *)(*(_DWORD *)(v17 + 4 * v28) + 532);
              for ( m = v29 + 1; m < v11; *(_BYTE *)(v32 + 532) = v30 )
                v32 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * m++);
              *(_BYTE *)(v18 + 532) = 1;
              *((_DWORD *)this + 300) = *((_DWORD *)this + 301);
              break;
            default:
              for ( n = 0; n < *((_DWORD *)this + 304); *(_BYTE *)(v34 + 532) = 0 )
                v34 = *(_DWORD *)(*((_DWORD *)this + 303) + 4 * n++);
              *(_BYTE *)(v18 + 532) = 1;
              break;
          }
        }
LABEL_57:
        v42 = *((_DWORD *)this + 28);
        v43 = *(void (__stdcall **)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD))(v42 + 736);
        if ( v43 )
          v43(v42, 1794, *((_DWORD *)this + 34), this, 0, 0);
        return 1;
      }
      v15 = *((_DWORD *)this + 28);
      v16 = *(void (__stdcall **)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD))(v15 + 736);
      if ( !v16 )
        return 1;
      v16(v15, 1793, *((_DWORD *)this + 34), this, 0, 0);
      result = 1;
      break;
    case 0x202u:
      ReleaseCapture();
      v35 = *((_DWORD *)this + 300);
      *((_BYTE *)this + 1208) = 0;
      if ( v35 == -1 )
        return 1;
      v36 = *((_DWORD *)this + 301);
      v37 = v36;
      if ( v36 <= v35 )
      {
        v37 = v35;
        if ( v36 < v35 )
          v35 = *((_DWORD *)this + 301);
      }
      for ( ii = v35 + 1; ii < v37; *(_BYTE *)(v41 + 532) = *(_BYTE *)(v40 + 532) )
      {
        v39 = *((_DWORD *)this + 303);
        v40 = *(_DWORD *)(v39 + 4 * *((_DWORD *)this + 301));
        v41 = *(_DWORD *)(v39 + 4 * ii++);
      }
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 303) + 4 * *((_DWORD *)this + 300)) + 532) = *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 303) + 4 * *((_DWORD *)this + 301)) + 532);
      if ( *((_DWORD *)this + 301) == *((_DWORD *)this + 300) )
        return 1;
      goto LABEL_57;
    case 0x20Au:
      SystemParametersInfoW(0x68u, 0, &pvParam, 0);
      v50 = (int)(((unsigned __int64)(2004318071LL * SHIWORD(v8)) >> 32) - SHIWORD(v8)) >> 6;
      CREScrollBar::Scroll((CREListBox *)((char *)this + 564), pvParam * (v50 + (v50 >> 31)));
      return 1;
    default:
      return 0;
  }
  return result;
}
