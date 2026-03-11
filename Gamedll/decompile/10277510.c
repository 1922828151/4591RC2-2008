/*
 * func-name: sub_10277510
 * func-address: 0x10277510
 * callers: 0x10013174
 * callees: 0x102c9fe0
 */

char __userpurge sub_10277510@<al>(_BYTE *a1@<ecx>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // kr00_4
  int v13; // ebx
  LONG v14; // eax
  LONG v15; // eax
  struct tagRECT rc; // [esp+Ch] [ebp-10h] BYREF

  if ( a1[156] && a1[90] && !a1[89] && !a1[92] )
  {
    if ( a3 == 512 )
    {
      if ( !*(_BYTE *)(GUISystem::Instance(a2) + 47)
        || !(*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 124))(a1, a4, a5) )
      {
        return 0;
      }
      v8 = (int)((double)(a4 - *((_DWORD *)a1 + 41))
               / (double)(*((_DWORD *)a1 + 43) - *((_DWORD *)a1 + 41))
               * (double)(*((_DWORD *)a1 + 202) - *((_DWORD *)a1 + 200))
               + (double)*((int *)a1 + 200));
      v9 = *((_DWORD *)a1 + 201);
      v10 = (double)(a5 - *((_DWORD *)a1 + 42))
          / (double)(*((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 42))
          * (double)(*((_DWORD *)a1 + 203) - v9);
    }
    else
    {
      if ( a3 != 513 || !(*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 124))(a1, a4, a5) )
        return 0;
      v8 = (int)((double)(a4 - *((_DWORD *)a1 + 41))
               / (double)(*((_DWORD *)a1 + 43) - *((_DWORD *)a1 + 41))
               * (double)(*((_DWORD *)a1 + 202) - *((_DWORD *)a1 + 200))
               + (double)*((int *)a1 + 200));
      v9 = *((_DWORD *)a1 + 201);
      v10 = (double)(a5 - *((_DWORD *)a1 + 42))
          / (double)(*((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 42))
          * (double)(*((_DWORD *)a1 + 203) - v9);
    }
    v11 = (int)(v10 + (double)v9);
    v12 = *((_DWORD *)a1 + 261);
    v13 = *((_DWORD *)a1 + 262) / 2;
    *((_DWORD *)a1 + 260) = v11;
    *((_DWORD *)a1 + 259) = v8;
    SetRect(&rc, v8 - v12 / 2, v11 - v13, v12 / 2 + v8, v13 + v11);
    if ( rc.left < 0 )
      OffsetRect(&rc, -rc.left, 0);
    v14 = *((_DWORD *)a1 + 202);
    if ( rc.right > v14 )
      OffsetRect(&rc, v14 - rc.right, 0);
    if ( rc.top < 0 )
      OffsetRect(&rc, 0, -rc.top);
    v15 = *((_DWORD *)a1 + 203);
    if ( rc.bottom > v15 )
      OffsetRect(&rc, 0, v15 - rc.bottom);
    CREDialog::SendEvent(
      *((CREDialog **)a1 + 28),
      0x2100u,
      1,
      (struct CREControl *)a1,
      LOWORD(rc.left) | (LOWORD(rc.top) << 16),
      0);
  }
  return 0;
}
