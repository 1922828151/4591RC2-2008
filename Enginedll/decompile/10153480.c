/*
 * func-name: ?HandleMouse@CItemHolder@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x10153480
 * callers: none
 * callees: 0x10019470, 0x100a2ff0, 0x100a3050, 0x100a99f0, 0x100d6d20, 0x1014fae0, 0x1014fb50, 0x1014fd50, 0x101531c0, 0x101a2500, 0x101a2534
 */

char __thiscall CItemHolder::HandleMouse(CItemHolder *this, _DWORD *a2, POINT pt, unsigned int a4, int a5)
{
  _DWORD *v6; // edi
  int *v8; // edi
  int v9; // eax
  LONG v10; // ecx
  struct GUISystem *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edx
  LONG v15; // ecx
  LONG v16; // eax
  int v17; // edx
  struct CREControl *ControlAtPoint; // eax
  struct CREControl *v19; // ebx
  struct GUISystem *v20; // eax
  int v21; // eax
  CREDialog *v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  _DWORD *v25; // ebp
  _DWORD *v26; // eax
  _DWORD **v27; // eax
  int v28; // eax
  CREDialog *v29; // ecx
  _DWORD **v30; // eax
  void *v31; // ebp
  LONG y; // edx
  POINT v33; // [esp+8h] [ebp-14h] BYREF
  int v34; // [esp+18h] [ebp-4h]

  if ( a2 == (_DWORD *)512 )
  {
    y = pt.y;
    *((_DWORD *)this + 152) = pt.x;
    *((_DWORD *)this + 153) = y;
    return 0;
  }
  else
  {
    if ( a2 == (_DWORD *)513 )
    {
      v8 = (int *)((char *)this + 164);
      if ( PtInRect((const RECT *)((char *)this + 164), pt) )
      {
        if ( *((_DWORD *)this + 156) )
        {
          if ( *((_BYTE *)this + 629) && CItemHolder::PosOnPoint(this, &pt, &a5, (int *)&a2) )
            (*(void (__thiscall **)(CItemHolder *, int, CItemHolder *, POINT *))(*(_DWORD *)this + 84))(
              this,
              4864,
              this,
              &pt);
        }
        else
        {
          v21 = *v8;
          pt.y -= *((_DWORD *)this + 42);
          v22 = (CREDialog *)*((_DWORD *)this + 28);
          pt.x -= v21;
          CREDialog::RequestFocus(v22, this);
          v23 = CItemHolder::ItemOnPoint(this, &pt);
          v24 = v23;
          if ( v23 != -1 )
          {
            if ( *((_BYTE *)this + 628) )
            {
              if ( *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 134, v23) + 4) )
              {
                *((_DWORD *)this + 151) = v24;
                v25 = operator new(0x6Cu);
                a2 = v25;
                v26 = 0;
                v34 = 0;
                if ( v25 )
                {
                  v27 = (_DWORD **)std::vector<Model *>::operator[]((_DWORD *)this + 134, v24);
                  v26 = sub_1014FB50(v25, *v27);
                }
                v34 = -1;
                *((_DWORD *)this + 156) = v26;
                v28 = *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 134, v24);
                v29 = (CREDialog *)*((_DWORD *)this + 28);
                *((_DWORD *)this + 154) = *(_DWORD *)(v28 + 8) - pt.x;
                *((_DWORD *)this + 155) = *(_DWORD *)(v28 + 12) - pt.y;
                CREDialog::SendEvent(v29, 0x1302u, 1, this, v24, 0);
                if ( *((_BYTE *)this + 631) )
                {
                  if ( *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 134, v24) )
                  {
                    v30 = (_DWORD **)std::vector<Model *>::operator[]((_DWORD *)this + 134, v24);
                    v31 = *v30;
                    if ( *v30 )
                    {
                      sub_1014FAE0(*v30);
                      operator delete(v31);
                    }
                    *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 134, v24) = 0;
                  }
                  *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 134, v24) = 0;
                }
                CREDialog::s_pControlLast = this;
              }
            }
            else if ( *((_BYTE *)this + 633) )
            {
              CREDialog::SendEvent(*((CREDialog **)this + 28), 0x1303u, 1, this, v23, 0);
            }
          }
        }
      }
      else
      {
        v9 = *((_DWORD *)this + 28);
        pt.x += *(_DWORD *)(v9 + 692);
        v10 = *(_DWORD *)(v9 + 696) + pt.y;
        pt.y = v10;
        if ( *(_BYTE *)(v9 + 176) )
          pt.y = *(_DWORD *)(v9 + 708) + v10;
        v11 = GUISystem::Instance();
        v12 = (*(int (__thiscall **)(struct GUISystem *, POINT *))(*(_DWORD *)v11 + 72))(v11, &pt);
        v13 = v12;
        if ( !v12 )
          return 0;
        v14 = *(_DWORD *)(v12 + 4);
        v33 = pt;
        v15 = pt.x - *(_DWORD *)(v14 + 692);
        pt.x = v15;
        v16 = pt.y - *(_DWORD *)(*(_DWORD *)(v12 + 4) + 696);
        pt.y -= *(_DWORD *)(*(_DWORD *)(v13 + 4) + 696);
        v17 = *(_DWORD *)(v13 + 4);
        if ( *(_BYTE *)(v17 + 176) )
        {
          v16 -= *(_DWORD *)(v17 + 708);
          pt.y = v16;
        }
        ControlAtPoint = CREDialog::GetControlAtPoint(*(CREDialog **)(v13 + 4), (struct tagPOINT)__PAIR64__(v16, v15));
        v19 = ControlAtPoint;
        if ( !ControlAtPoint || *((_DWORD *)ControlAtPoint + 35) != 23 )
          return 0;
        if ( *((_DWORD *)this + 156) )
        {
          (*(void (__thiscall **)(struct CREControl *, int, CItemHolder *, POINT *))(*(_DWORD *)ControlAtPoint + 84))(
            ControlAtPoint,
            4864,
            this,
            &v33);
        }
        else
        {
          v20 = GUISystem::Instance();
          (*(void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v20 + 60))(v20, v13);
          CREDialog::s_pControlFocus = v19;
          (*(void (__thiscall **)(struct CREControl *, int, LONG, LONG, unsigned int, int))(*(_DWORD *)v19 + 92))(
            v19,
            513,
            pt.x,
            pt.y,
            a4,
            a5);
        }
      }
      return 1;
    }
    if ( a2 == (_DWORD *)517 && *((_DWORD *)this + 156) )
    {
      (*(void (__thiscall **)(CItemHolder *, int, CItemHolder *, _DWORD))(*(_DWORD *)this + 84))(
        this,
        4865,
        this,
        *((_DWORD *)this + 151));
      v6 = (_DWORD *)*((_DWORD *)this + 156);
      *((_DWORD *)this + 151) = -1;
      if ( v6 )
      {
        sub_1014FAE0(v6);
        operator delete(v6);
        *((_DWORD *)this + 156) = 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
