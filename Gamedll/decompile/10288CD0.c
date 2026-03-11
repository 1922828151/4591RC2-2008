/*
 * func-name: sub_10288CD0
 * func-address: 0x10288cd0
 * callers: 0x10006acd
 * callees: 0x1000267b, 0x100036ed, 0x1000492b, 0x10004c50, 0x1000d6c5, 0x10013ca0, 0x10016d1f, 0x10017ed1, 0x1001a3d4, 0x102c9d50
 */

unsigned int __thiscall sub_10288CD0(
        unsigned int *this,
        unsigned int *a2,
        char *Source,
        int a4,
        void *a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int result; // eax
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // ebx
  char *v17; // edi
  void *v18; // eax
  void *v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // ebp
  unsigned int v23; // ebx
  void *v24; // edi
  int v25; // ebp
  int v26; // eax
  void *v27; // ebx
  int v28; // eax
  void *v29; // ecx
  int v30; // edx
  char *v31; // ebx
  char *v32; // ebp
  int v33; // [esp+0h] [ebp-20h]
  int v34; // [esp+4h] [ebp-1Ch]
  int v35; // [esp+10h] [ebp-10h] BYREF
  void *v36; // [esp+14h] [ebp-Ch]
  char v37[8]; // [esp+18h] [ebp-8h] BYREF

  if ( !a6 || a6 != a4 )
    _invalid_parameter_noinfo();
  result = this[1];
  v10 = (a7 - (int)a5) >> 2;
  if ( result )
    v11 = (int)(this[3] - result) >> 2;
  else
    v11 = 0;
  if ( v10 )
  {
    if ( result )
      v12 = (int)(this[2] - result) >> 2;
    else
      v12 = 0;
    if ( 0x3FFFFFFF - v12 < v10 )
      result = sub_10004C50(v33, v34);
    if ( result )
      v13 = (int)(this[2] - result) >> 2;
    else
      v13 = 0;
    if ( v11 >= v10 + v13 )
    {
      v23 = this[2];
      if ( result > v23 )
        _invalid_parameter_noinfo();
      if ( this != a2 )
        _invalid_parameter_noinfo();
      v24 = Source;
      if ( (int)(v23 - (_DWORD)Source) >> 2 >= v10 )
      {
        v31 = (char *)this[2];
        v32 = &v31[-4 * v10];
        this[2] = sub_1001A3D4(v32, (int)v31, v31);
        sub_1000267B(v24, (int)v32, (int)v31);
        return sub_100036ED(a4, a5, a6, a7, v24);
      }
      else
      {
        v25 = 4 * v10;
        sub_1001A3D4(Source, this[2], &Source[v25]);
        v35 = a4;
        v36 = a5;
        sub_10016D1F((int)v37);
        v26 = sub_10013CA0((int)&a2);
        sub_1000D6C5((int)&v35, v26);
        v27 = v36;
        sub_1000492B(v35, v36, a6, a7, (void *)this[2]);
        v28 = v35;
        v29 = a5;
        v30 = a4;
        this[2] += v25;
        return sub_100036ED(v30, v29, v28, (int)v27, v24);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v11 >> 1) >= v11 )
        v14 = (v11 >> 1) + v11;
      else
        v14 = 0;
      if ( result )
        v15 = (int)(this[2] - result) >> 2;
      else
        v15 = 0;
      if ( v14 < v10 + v15 )
      {
        if ( result )
          v16 = (int)(this[2] - result) >> 2;
        else
          v16 = 0;
        v14 = v10 + v16;
      }
      v17 = (char *)sub_10017ED1(v14);
      v18 = (void *)sub_1001A3D4((void *)this[1], (int)Source, v17);
      v19 = (void *)sub_1000492B(a4, a5, a6, a7, v18);
      sub_1001A3D4(Source, this[2], v19);
      v20 = this[1];
      if ( v20 )
        v21 = (int)(this[2] - v20) >> 2;
      else
        v21 = 0;
      v22 = v21 + v10;
      if ( v20 )
        operator delete((void *)this[1]);
      result = (unsigned int)&v17[4 * v22];
      this[1] = (unsigned int)v17;
      this[3] = (unsigned int)&v17[4 * v14];
      this[2] = result;
    }
  }
  return result;
}
