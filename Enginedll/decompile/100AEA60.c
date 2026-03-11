/*
 * func-name: ?HandleMouse@CREListCtrl@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100aea60
 * callers: none
 * callees: 0x100cddf0, 0x101190c0
 */

char __thiscall CREListCtrl::HandleMouse(
        CREListCtrl *this,
        unsigned int a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5)
{
  LONG v6; // ebx
  signed int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  void (__stdcall *v11)(int, int, _DWORD, CREListCtrl *, int, int); // edx
  LONG v13; // ebx
  signed int v14; // edi
  int v15; // eax
  void (__stdcall *v16)(int, int, _DWORD, CREListCtrl *, _DWORD, _DWORD); // ecx
  signed int v17; // [esp+14h] [ebp+4h]
  signed int v18; // [esp+14h] [ebp+4h]

  if ( a2 == 512 )
  {
    if ( *((_DWORD *)this + 176) )
    {
      v13 = *((_DWORD *)this + 41) + 2;
      if ( a3.x <= v13
        || a3.x >= *((_DWORD *)this + 43) - 2
        || a3.y <= *((_DWORD *)this + 42) + *((_DWORD *)this + 178) + 2
        || a3.y >= *((_DWORD *)this + 44) - 2 )
      {
LABEL_28:
        *((_DWORD *)this + 181) = -1;
        *((_DWORD *)this + 182) = -1;
        return 1;
      }
      v14 = 0;
      v18 = std::vector<BBox>::size((char *)this + 744);
      if ( v18 > 0 )
      {
        while ( a3.x <= v13 || a3.x >= v13 + *(_DWORD *)std::vector<BBox>::operator[](v14) )
        {
          v13 += *(_DWORD *)std::vector<BBox>::operator[](v14++);
          if ( v14 >= v18 )
            goto LABEL_26;
        }
        *((_DWORD *)this + 181) = v14;
      }
LABEL_26:
      *((_DWORD *)this + 182) = (a3.y - *((_DWORD *)this + 42) - *((_DWORD *)this + 178) - 2) / *((_DWORD *)this + 180);
      v15 = *((_DWORD *)this + 28);
      v16 = *(void (__stdcall **)(int, int, _DWORD, CREListCtrl *, _DWORD, _DWORD))(v15 + 736);
      if ( v16 )
      {
        v16(v15, 4098, *((_DWORD *)this + 34), this, 0, 0);
        return 1;
      }
    }
  }
  else if ( a2 == 513 )
  {
    v6 = *((_DWORD *)this + 41) + 2;
    if ( a3.x > v6
      && a3.x < *((_DWORD *)this + 43) - 2
      && a3.y > *((_DWORD *)this + 42) + *((_DWORD *)this + 178) + 2
      && a3.y < *((_DWORD *)this + 44) - 2 )
    {
      v7 = 0;
      v17 = std::vector<BBox>::size((char *)this + 744);
      if ( v17 > 0 )
      {
        while ( a3.x <= v6 || a3.x >= v6 + *(_DWORD *)std::vector<BBox>::operator[](v7) )
        {
          v6 += *(_DWORD *)std::vector<BBox>::operator[](v7++);
          if ( v7 >= v17 )
            goto LABEL_13;
        }
        *((_DWORD *)this + 183) = v7;
      }
LABEL_13:
      v8 = *((_DWORD *)this + 183);
      v9 = *((_DWORD *)this + 185)
         + (a3.y - *((_DWORD *)this + 42) - *((_DWORD *)this + 178) - 2) / *((_DWORD *)this + 180);
      v10 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 184) = v9;
      v11 = *(void (__stdcall **)(int, int, _DWORD, CREListCtrl *, int, int))(v10 + 736);
      if ( v11 )
      {
        v11(v10, 4097, *((_DWORD *)this + 34), this, v8, v9);
        return 1;
      }
      return 1;
    }
    goto LABEL_28;
  }
  return 1;
}
