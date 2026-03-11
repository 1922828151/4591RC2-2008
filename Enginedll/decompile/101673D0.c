/*
 * func-name: sub_101673D0
 * func-address: 0x101673d0
 * callers: 0x10167720
 * callees: 0x1010f500, 0x10166120, 0x1016a3e0, 0x1016a440
 */

char __thiscall sub_101673D0(
        struct SurfaceNodeMessage *this,
        RECT *lprcSrc1,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7)
{
  struct SurfaceNodeMessage *v9; // edi
  struct SurfaceNodeMessage *v10; // esi
  struct SurfaceNodeMessage *v11; // ebx
  struct SurfaceNodeMessage **v12; // eax
  struct SurfaceNodeMessage *v13; // edi
  struct SurfaceNodeMessage *v14; // esi
  struct SurfaceNodeMessage *v15; // ebx
  struct SurfaceNodeMessage **v16; // eax
  RECT *v17; // edx
  int i; // ecx
  double v19; // st7
  int v20; // edi
  int v21; // eax
  int j; // esi
  int v23; // edx
  int v24; // esi
  int v25; // eax
  int v26; // edi
  bool v27; // zf
  SurfaceNode *v28; // ecx
  int v29[2]; // [esp+8h] [ebp-38h] BYREF
  int v30; // [esp+10h] [ebp-30h] BYREF
  struct tagRECT rcDst; // [esp+18h] [ebp-28h] BYREF
  _DWORD v32[6]; // [esp+28h] [ebp-18h] BYREF
  RECT *lprcSrc1a; // [esp+44h] [ebp+4h]
  float v34; // [esp+50h] [ebp+10h]
  int v35; // [esp+50h] [ebp+10h]

  if ( !IntersectRect(&rcDst, lprcSrc1, (const RECT *)((char *)this + 12)) )
    return 0;
  v34 = (double)((rcDst.bottom - rcDst.top) * (rcDst.right - rcDst.left))
      / (double)((lprcSrc1->right - lprcSrc1->left) * (lprcSrc1->bottom - lprcSrc1->top))
      * a5;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v13 = (struct SurfaceNodeMessage *)**((_DWORD **)this + 1);
      v14 = this;
      while ( 1 )
      {
        v15 = (struct SurfaceNodeMessage *)*((_DWORD *)this + 1);
        if ( !v14 || v14 != this )
          invalid_parameter_noinfo();
        if ( v13 == v15 )
          break;
        if ( !v14 )
          invalid_parameter_noinfo();
        if ( v13 == *((struct SurfaceNodeMessage **)v14 + 1) )
          invalid_parameter_noinfo();
        if ( (double)rcDst.right > *((float *)v13 + 3) )
        {
          if ( v13 == *((struct SurfaceNodeMessage **)v14 + 1) )
            invalid_parameter_noinfo();
          if ( (double)rcDst.left < *((float *)v13 + 3) )
          {
            if ( v13 == *((struct SurfaceNodeMessage **)v14 + 1) )
              invalid_parameter_noinfo();
            if ( (double)rcDst.bottom > *((float *)v13 + 5) )
            {
              if ( v13 == *((struct SurfaceNodeMessage **)v14 + 1) )
                invalid_parameter_noinfo();
              if ( (double)rcDst.top < *((float *)v13 + 5) )
              {
                v16 = (struct SurfaceNodeMessage **)sub_1010F500((int)this, &v30, (int)v14, (_DWORD **)v13);
                v14 = *v16;
                v13 = v16[1];
              }
            }
          }
        }
        if ( !v14 )
          invalid_parameter_noinfo();
        if ( v13 == *((struct SurfaceNodeMessage **)v14 + 1) )
          invalid_parameter_noinfo();
        v13 = *(struct SurfaceNodeMessage **)v13;
      }
    }
    else if ( a4 == 2 )
    {
      v9 = (struct SurfaceNodeMessage *)**((_DWORD **)this + 1);
      v10 = this;
      while ( 1 )
      {
        v11 = (struct SurfaceNodeMessage *)*((_DWORD *)this + 1);
        if ( !v10 || v10 != this )
          invalid_parameter_noinfo();
        if ( v9 == v11 )
          break;
        if ( !v10 )
          invalid_parameter_noinfo();
        if ( v9 == *((struct SurfaceNodeMessage **)v10 + 1) )
          invalid_parameter_noinfo();
        if ( (double)rcDst.right > *((float *)v9 + 3) )
        {
          if ( v9 == *((struct SurfaceNodeMessage **)v10 + 1) )
            invalid_parameter_noinfo();
          if ( (double)rcDst.left < *((float *)v9 + 3) )
          {
            if ( v9 == *((struct SurfaceNodeMessage **)v10 + 1) )
              invalid_parameter_noinfo();
            if ( (double)rcDst.bottom > *((float *)v9 + 5) )
            {
              if ( v9 == *((struct SurfaceNodeMessage **)v10 + 1) )
                invalid_parameter_noinfo();
              if ( (double)rcDst.top < *((float *)v9 + 5) )
              {
                v12 = (struct SurfaceNodeMessage **)sub_1010F500((int)this, v29, (int)v10, (_DWORD **)v9);
                v10 = *v12;
                v9 = v12[1];
              }
            }
          }
        }
        if ( !v10 )
          invalid_parameter_noinfo();
        if ( v9 == *((struct SurfaceNodeMessage **)v10 + 1) )
          invalid_parameter_noinfo();
        v9 = *(struct SurfaceNodeMessage **)v9;
      }
    }
  }
  else if ( a7 )
  {
    v17 = 0;
    for ( i = 0; i < 32; ++i )
    {
      if ( ((1 << i) & a7) != 0 )
        v17 = (RECT *)((char *)v17 + 1);
    }
    lprcSrc1a = v17;
    v19 = v34 * 10.0;
    *(_QWORD *)v29 = (__int64)v19;
    if ( (unsigned int)(__int64)v19 )
    {
      v35 = (__int64)v19;
      do
      {
        v20 = -1;
        v21 = 0;
        for ( j = 0; j < 32; ++j )
        {
          if ( ((1 << j) & a7) != 0 )
          {
            if ( !(rand() % (int)lprcSrc1a) )
              v20 = j;
            v21 = j;
          }
        }
        if ( v20 == -1 )
          v20 = v21;
        *(float *)&v32[2] = 0.0;
        *(float *)&v32[1] = (double)(rand() % (rcDst.right - rcDst.left)) * 100.0 / 100.0 + (double)rcDst.left;
        v23 = rand() % (rcDst.bottom - rcDst.top);
        v24 = *((_DWORD *)this + 1);
        v25 = *(_DWORD *)(v24 + 4);
        v32[5] = v20;
        v32[0] = 0;
        *(float *)&v32[3] = (double)v23 * 100.0 / 100.0 + (double)rcDst.top;
        *(float *)&v32[4] = a6;
        v26 = sub_1016A3E0(v24, v25, v32);
        sub_1016A440(1);
        v27 = v35-- == 1;
        *(_DWORD *)(v24 + 4) = v26;
        **(_DWORD **)(v26 + 4) = v26;
      }
      while ( !v27 );
    }
  }
  v28 = (SurfaceNode *)*((_DWORD *)this + 7);
  if ( v28 )
    SurfaceNode::BuildMesh(v28, this);
  return 1;
}
