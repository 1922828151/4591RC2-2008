/*
 * func-name: ?CalcTextRect@CREDialog@@QAEJPB_WPAVCREElement@@PAUtagRECT@@H@Z
 * func-address: 0x100b66a0
 * callers: 0x100be7e0, 0x100befd0, 0x100bf3d0, 0x100bf520, 0x100c2500, 0x100c2cc0, 0x100c30e0
 * callees: 0x100b5280
 */

int __thiscall CREDialog::CalcTextRect(
        CREDialog *this,
        const wchar_t *a2,
        struct CREElement *a3,
        struct tagRECT *a4,
        int a5)
{
  int v5; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  double v10; // st4
  double v11; // st7
  int v12; // ebx
  int v13; // edx
  double v14; // rtt
  double v15; // st4
  double v16; // st7
  double v17; // rt0
  int v18; // eax
  int v19; // eax

  v5 = *((_DWORD *)a3 + 1);
  if ( REGetGlobalDialogResourceManager() )
  {
    v8 = *(_DWORD *)(*((_DWORD *)this + 188) + 4 * v5);
    v7 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v8);
  }
  else
  {
    v7 = 0;
  }
  if ( *((float *)a3 + 45) < 1.0 )
  {
    if ( *((float *)a3 + 45) > 0.0 )
      v9 = (__int64)(*((float *)a3 + 45) * 255.0 + 0.5);
    else
      v9 = 0;
  }
  else
  {
    v9 = 255;
  }
  v10 = 1.0;
  v11 = 0.0;
  if ( *((float *)a3 + 46) < 1.0 )
  {
    if ( *((float *)a3 + 46) > 0.0 )
      v12 = (__int64)(*((float *)a3 + 46) * 255.0 + 0.5);
    else
      v12 = 0;
    v10 = 1.0;
    v11 = 0.0;
  }
  else
  {
    v12 = 255;
  }
  if ( v10 > *((float *)a3 + 47) )
  {
    v14 = v10;
    v15 = v11;
    v16 = v14;
    if ( v15 < *((float *)a3 + 47) )
      v13 = (__int64)(*((float *)a3 + 47) * 255.0 + 0.5);
    else
      v13 = 0;
    v17 = v15;
    v10 = v16;
    v11 = v17;
  }
  else
  {
    v13 = 255;
  }
  if ( v10 > *((float *)a3 + 48) )
  {
    if ( v11 < *((float *)a3 + 48) )
      v18 = (__int64)(255.0 * *((float *)a3 + 48) + 0.5);
    else
      v18 = 0;
  }
  else
  {
    v18 = 255;
  }
  v19 = (*(int (__stdcall **)(_DWORD, _DWORD, const wchar_t *, int, struct tagRECT *, int, int))(**(_DWORD **)(v7 + 520)
                                                                                               + 60))(
          *(_DWORD *)(v7 + 520),
          0,
          a2,
          a5,
          a4,
          *((_DWORD *)a3 + 2) | 0x400,
          v13 | ((v12 | ((v9 | (v18 << 8)) << 8)) << 8));
  return v19 >= 0 ? 0 : v19;
}
