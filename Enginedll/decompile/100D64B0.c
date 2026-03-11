/*
 * func-name: ?MsgProc@GUISystem@@QAEJPAUHWND__@@IIJ@Z
 * func-address: 0x100d64b0
 * callers: none
 * callees: 0x10019470, 0x100a78a0, 0x100d5bd0, 0x10149bc0, 0x1014a3e0
 */

int __thiscall GUISystem::MsgProc(GUISystem *this, HWND a2, unsigned int a3, unsigned int a4, int a5)
{
  struct CDlgMgr *v7; // eax
  _BYTE *v8; // esi
  CDlgMgr *v9; // eax
  CTYDialog *Dialog; // eax
  CTYDialog *v11; // esi
  CDlgMgr *v12; // eax
  CTYDialog *v13; // eax
  LONG y; // ebx
  int v15; // eax
  int v16; // edi
  unsigned int v17; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  LONG v22; // ecx
  LONG v23; // ecx
  void (__thiscall **v24)(GUISystem *, _DWORD); // ebx
  _DWORD *v25; // eax
  int v26; // eax
  char *v27; // esi
  LONG v28; // ecx
  LONG v29; // ecx
  unsigned int v30; // edi
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // edi
  unsigned int v37; // edi
  LONG x; // ebp
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // ecx
  LONG v45; // eax
  LONG v46; // eax
  LONG v47; // eax
  LONG v48; // eax
  unsigned int i; // edi
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  int v54; // ecx
  int v55; // ecx
  int v56; // [esp+20h] [ebp-20h]
  int v57; // [esp+20h] [ebp-20h]
  struct tagPOINT v58; // [esp+38h] [ebp-8h] BYREF

  if ( byte_11240B48 )
    return 0;
  *((_DWORD *)this + 8) = a2;
  if ( a3 == 513
    || a3 == 514
    || a3 == 512
    || a3 == 515
    || a3 == 516
    || a3 == 517
    || a3 == 518
    || a3 == 519
    || a3 == 520
    || a3 == 521 )
  {
    *((_DWORD *)this + 9) = (__int16)a5;
    *((_DWORD *)this + 10) = SHIWORD(a5);
    if ( a3 == 513 )
    {
      *((_BYTE *)this + 47) = 1;
    }
    else if ( a3 == 514 )
    {
      *((_BYTE *)this + 47) = 0;
    }
  }
  v7 = CDlgMgr::Instance();
  if ( !CTYDialog::GetVisible(*((CTYDialog **)v7 + 5))
    || (v8 = (_BYTE *)*((_DWORD *)CDlgMgr::Instance() + 5)) == 0
    || !(*(unsigned __int8 (__thiscall **)(_BYTE *, HWND, unsigned int, unsigned int, int))(*(_DWORD *)v8 + 8))(
          v8,
          a2,
          a3,
          a4,
          a5)
    && !v8[4005] )
  {
    if ( *((_BYTE *)CDlgMgr::Instance() + 129) )
    {
      v56 = *((_DWORD *)CDlgMgr::Instance() + 33);
      v9 = CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v9, v56);
      v11 = Dialog;
      if ( Dialog )
      {
        if ( CTYDialog::GetVisible(Dialog) )
          return (*(unsigned __int8 (__thiscall **)(CTYDialog *, HWND, unsigned int, unsigned int, int))(*(_DWORD *)v11 + 8))(
                   v11,
                   a2,
                   a3,
                   a4,
                   a5);
      }
    }
    if ( !CREDialog::s_pControlLast
      || *((_DWORD *)CREDialog::s_pControlLast + 35) != 23
      || (v57 = *(_DWORD *)(*((_DWORD *)CREDialog::s_pControlLast + 28) + 88),
          v12 = CDlgMgr::Instance(),
          v13 = CDlgMgr::GetDialog(v12, v57),
          !CTYDialog::GetVisible(v13))
      || !(*(unsigned __int8 (__thiscall **)(_DWORD, HWND, unsigned int, unsigned int, int))(**((_DWORD **)CREDialog::s_pControlLast
                                                                                              + 28)
                                                                                           + 8))(
            *((_DWORD *)CREDialog::s_pControlLast + 28),
            a2,
            a3,
            a4,
            a5) )
    {
      GUISystem::GetLogicMousePos(this, &v58);
      y = v58.y;
      if ( a3 != 513 )
        goto LABEL_52;
      v15 = *((_DWORD *)this + 5);
      v16 = v15 ? (*((_DWORD *)this + 6) - v15) >> 2 : 0;
      v17 = v16 - 1;
      if ( (v17 & 0x80000000) != 0 )
        goto LABEL_52;
      while ( 1 )
      {
        v18 = *((_DWORD *)this + 5);
        if ( !v18 || v17 >= (*((_DWORD *)this + 6) - v18) >> 2 )
          invalid_parameter_noinfo();
        v19 = *((_DWORD *)this + 5);
        if ( !**(_BYTE **)(v19 + 4 * v17) )
          goto LABEL_61;
        if ( !v19 || v17 >= (*((_DWORD *)this + 6) - v19) >> 2 )
          invalid_parameter_noinfo();
        v20 = *((_DWORD *)this + 5);
        if ( !*(_BYTE *)(*(_DWORD *)(v20 + 4 * v17) + 1) )
          goto LABEL_61;
        if ( !v20 || v17 >= (*((_DWORD *)this + 6) - v20) >> 2 )
          invalid_parameter_noinfo();
        if ( !*(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * v17) + 2) )
          goto LABEL_61;
        v21 = *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 4, v17) + 4);
        if ( !*(_BYTE *)(v21 + 177) )
          break;
        v22 = *(_DWORD *)(v21 + 692);
        if ( v58.x < v22 || v58.x >= v22 + *(_DWORD *)(v21 + 700) )
        {
          y = v58.y;
        }
        else
        {
          v23 = *(_DWORD *)(v21 + 696);
          y = v58.y;
          if ( v58.y >= v23 )
          {
            y = v58.y;
            if ( v58.y < v23 + *(_DWORD *)(v21 + 708) )
              goto LABEL_51;
          }
        }
LABEL_61:
        if ( (--v17 & 0x80000000) != 0 )
          goto LABEL_52;
      }
      v28 = *(_DWORD *)(v21 + 692);
      if ( v58.x < v28 )
        goto LABEL_61;
      if ( v58.x >= v28 + *(_DWORD *)(v21 + 700) )
        goto LABEL_61;
      v29 = *(_DWORD *)(v21 + 696);
      if ( y < v29 || y >= v29 + *(_DWORD *)(v21 + 704) )
        goto LABEL_61;
LABEL_51:
      v24 = (void (__thiscall **)(GUISystem *, _DWORD))(*(_DWORD *)this + 60);
      v25 = (_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 4, v17);
      (*v24)(this, *v25);
      y = v58.y;
LABEL_52:
      v26 = *((_DWORD *)this + 5);
      v27 = (char *)this + 16;
      if ( !v26 || !((*((_DWORD *)this + 6) - v26) >> 2) )
        goto LABEL_75;
      v30 = ((*((_DWORD *)this + 6) - v26) >> 2) - 1;
      if ( v30 >= (*((_DWORD *)this + 6) - v26) >> 2 )
        invalid_parameter_noinfo();
      v31 = *((_DWORD *)this + 5);
      if ( !**(_BYTE **)(v31 + 4 * v30) )
        goto LABEL_75;
      if ( !v31 || v30 >= (*((_DWORD *)this + 6) - v31) >> 2 )
        invalid_parameter_noinfo();
      if ( !*(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * v30) + 1)
        || !*(_BYTE *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 4, v30) + 2)
        || ((v32 = *((_DWORD *)this + 5)) != 0 ? (v33 = (*((_DWORD *)this + 6) - v32) >> 2) : (v33 = 0),
            v34 = std::vector<Model *>::operator[]((_DWORD *)this + 4, v33 - 1),
            !(*(unsigned __int8 (__thiscall **)(_DWORD, HWND, unsigned int, unsigned int, int))(**(_DWORD **)(*(_DWORD *)v34 + 4)
                                                                                              + 8))(
               *(_DWORD *)(*(_DWORD *)v34 + 4),
               a2,
               a3,
               a4,
               a5)) )
      {
LABEL_75:
        v35 = *((_DWORD *)this + 5);
        if ( v35 )
          v36 = (*((_DWORD *)this + 6) - v35) >> 2;
        else
          v36 = 0;
        v37 = v36 - 1;
        if ( (v37 & 0x80000000) == 0 )
        {
          x = v58.x;
          do
          {
            v39 = *((_DWORD *)v27 + 1);
            if ( !v39 || v37 >= (*((_DWORD *)v27 + 2) - v39) >> 2 )
              invalid_parameter_noinfo();
            v40 = *((_DWORD *)v27 + 1);
            if ( !v40 || v37 >= (*((_DWORD *)v27 + 2) - v40) >> 2 )
              invalid_parameter_noinfo();
            v41 = *((_DWORD *)v27 + 1);
            if ( **(_BYTE **)(v41 + 4 * v37) )
            {
              if ( !v41 || v37 >= (*((_DWORD *)v27 + 2) - v41) >> 2 )
                invalid_parameter_noinfo();
              v42 = *((_DWORD *)v27 + 1);
              if ( *(_BYTE *)(*(_DWORD *)(v42 + 4 * v37) + 1) )
              {
                if ( !v42 || v37 >= (*((_DWORD *)v27 + 2) - v42) >> 2 )
                  invalid_parameter_noinfo();
                v43 = *((_DWORD *)v27 + 1);
                if ( *(_BYTE *)(*(_DWORD *)(v43 + 4 * v37) + 2) )
                {
                  if ( !v43 || v37 >= (*((_DWORD *)v27 + 2) - v43) >> 2 )
                    invalid_parameter_noinfo();
                  v44 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v27 + 1) + 4 * v37) + 4);
                  if ( *(_BYTE *)(v44 + 177) )
                  {
                    v45 = *(_DWORD *)(v44 + 692);
                    if ( x >= v45 )
                    {
                      x = v58.x;
                      if ( v58.x < v45 + *(_DWORD *)(v44 + 700) )
                      {
                        v46 = *(_DWORD *)(v44 + 696);
                        if ( y >= v46 )
                        {
                          x = v58.x;
                          if ( y < v46 + *(_DWORD *)(v44 + 708) )
                            goto LABEL_108;
                        }
                      }
                    }
                  }
                  else
                  {
                    v47 = *(_DWORD *)(v44 + 692);
                    if ( x >= v47 && x < v47 + *(_DWORD *)(v44 + 700) )
                    {
                      v48 = *(_DWORD *)(v44 + 696);
                      if ( y >= v48 && y < v48 + *(_DWORD *)(v44 + 704) )
                      {
LABEL_108:
                        if ( (*(unsigned __int8 (__thiscall **)(int, HWND, unsigned int, unsigned int, int))(*(_DWORD *)v44 + 8))(
                               v44,
                               a2,
                               a3,
                               a4,
                               a5) )
                        {
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
            }
            --v37;
          }
          while ( (v37 & 0x80000000) == 0 );
        }
        for ( i = 0; ; ++i )
        {
          v50 = *((_DWORD *)v27 + 1);
          if ( !v50 || i >= (*((_DWORD *)v27 + 2) - v50) >> 2 )
            break;
          v51 = *((_DWORD *)v27 + 1);
          if ( !v51 || i >= (*((_DWORD *)v27 + 2) - v51) >> 2 )
            invalid_parameter_noinfo();
          v52 = *((_DWORD *)v27 + 1);
          if ( !*(_BYTE *)(*(_DWORD *)(v52 + 4 * i) + 2) )
          {
            if ( !v52 || i >= (*((_DWORD *)v27 + 2) - v52) >> 2 )
              invalid_parameter_noinfo();
            v53 = *((_DWORD *)v27 + 1);
            if ( **(_BYTE **)(v53 + 4 * i) )
            {
              if ( !v53 || i >= (*((_DWORD *)v27 + 2) - v53) >> 2 )
                invalid_parameter_noinfo();
              v54 = *((_DWORD *)v27 + 1);
              if ( *(_BYTE *)(*(_DWORD *)(v54 + 4 * i) + 1) )
              {
                if ( !v54 || i >= (*((_DWORD *)v27 + 2) - v54) >> 2 )
                  invalid_parameter_noinfo();
                v55 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v27 + 1) + 4 * i) + 4);
                (*(void (__thiscall **)(int, HWND, unsigned int, unsigned int, int))(*(_DWORD *)v55 + 8))(
                  v55,
                  a2,
                  a3,
                  a4,
                  a5);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
