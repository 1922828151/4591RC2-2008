/*
 * func-name: sub_100D2720
 * func-address: 0x100d2720
 * callers: 0x100d31d0
 * callees: 0x10061730, 0x100ce1f0, 0x100ceed0, 0x100d03c0, 0x1016a600
 */

unsigned int __thiscall sub_100D2720(_DWORD *this, int a2, _WORD *Source, unsigned int a4, unsigned __int16 *a5)
{
  unsigned int result; // eax
  int v7; // ecx
  unsigned int v8; // edx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _BYTE *v16; // ecx
  char *v17; // edi
  rsize_t v18; // eax
  void *v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebp
  char *v24; // ebx
  int v25; // eax
  int v26; // ebp
  int v27; // [esp+8h] [ebp-4h] BYREF
  int v28; // [esp+18h] [ebp+Ch]
  int v29; // [esp+1Ch] [ebp+10h]
  int v30; // [esp+1Ch] [ebp+10h]

  result = (unsigned int)a5;
  v27 = *a5;
  v7 = this[1];
  if ( v7 )
  {
    result = (this[3] - v7) >> 1;
    v8 = result;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
  {
    if ( v7 )
      v10 = (this[2] - v7) >> 1;
    else
      v10 = 0;
    if ( 0x7FFFFFFF - v10 < a4 )
      sub_100CE1F0();
    if ( v7 )
      v11 = (this[2] - v7) >> 1;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v24 = (char *)this[2];
      v25 = 2 * a4;
      v30 = 2 * a4;
      if ( (v24 - (char *)Source) >> 1 >= a4 )
      {
        v26 = (int)&v24[-v25];
        this[2] = sub_100D03C0(&v24[-v25], (int)v24, v24);
        sub_100CEED0(Source, v26, (int)v24);
        return (unsigned int)sub_10061730(Source, &Source[v30 / 2u], &v27);
      }
      else
      {
        sub_100D03C0(Source, (int)v24, &Source[v25 / 2u]);
        sub_1016A600(this[2], a4 - ((this[2] - (int)Source) >> 1), &v27);
        this[2] += v30;
        return (unsigned int)sub_10061730(Source, (_WORD *)(this[2] - v30), &v27);
      }
    }
    else
    {
      if ( 0x7FFFFFFF - (v8 >> 1) >= v8 )
      {
        v12 = (v8 >> 1) + v8;
        v29 = v12;
      }
      else
      {
        v29 = 0;
        v12 = 0;
      }
      if ( v7 )
        v13 = (this[2] - v7) >> 1;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
      {
        if ( v7 )
          v14 = (this[2] - v7) >> 1;
        else
          v14 = 0;
        v29 = a4 + v14;
        v12 = a4 + v14;
      }
      v15 = std::allocator<wchar_t>::allocate(this, v12);
      v16 = (_BYTE *)this[1];
      v17 = (char *)v15;
      v18 = 2 * (((char *)Source - v16) >> 1);
      v28 = (int)&v17[v18];
      if ( ((char *)Source - v16) >> 1 )
        memmove_s(v17, v18, v16, v18);
      v19 = (void *)sub_1016A600(v28, a4, &v27);
      v20 = (this[2] - (int)Source) >> 1;
      if ( v20 )
        memmove_s(v19, 2 * v20, Source, 2 * v20);
      v21 = this[1];
      if ( v21 )
        v22 = (this[2] - v21) >> 1;
      else
        v22 = 0;
      v23 = v22 + a4;
      if ( v21 )
        std::allocator<wchar_t>::deallocate(this, v21, (this[3] - v21) >> 1);
      result = v29;
      this[1] = v17;
      this[3] = &v17[2 * v29];
      this[2] = &v17[2 * v23];
    }
  }
  return result;
}
