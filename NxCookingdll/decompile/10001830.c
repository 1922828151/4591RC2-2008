/*
 * func-name: sub_10001830
 * func-address: 0x10001830
 * callers: 0x10001f60, 0x10001f90, 0x10001ff0, 0x10002100, 0x100022c0, 0x10002310, 0x10002380, 0x10002400, 0x10002630, 0x10002880, 0x100028d0, 0x10002a80, 0x10002b70, 0x10002fe0, 0x10003250, 0x10003340
 * callees: 0x10001160, 0x10035300
 */

int __thiscall sub_10001830(_DWORD *this, int a2, size_t Size)
{
  size_t v4; // ebx
  int i; // ebp
  int v6; // eax
  int v7; // edi
  unsigned __int8 (__thiscall *v8)(_DWORD *); // eax

  if ( !*((_BYTE *)this + 4) )
    return (*(int (__thiscall **)(_DWORD *, int, size_t))(*this + 12))(this, a2, Size);
  v4 = Size;
  for ( i = 0; v4 > 0x8000 - this[2]; i += v7 )
  {
    v6 = this[2];
    v7 = 0x8000 - v6;
    memcpy_0((char *)this + v6 + 12, (const void *)(a2 + i), 0x8000 - v6);
    v8 = *(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 8);
    this[2] = 0x8000;
    if ( !v8(this)
      && !byte_100580B2
      && (!dword_100580A4
       || sub_10001160(
            (_DWORD *)dword_100580A4,
            107,
            (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\MeqRemains\\meq_streams.h",
            1123,
            &byte_100580B2,
            "flushed",
            0)) )
    {
      __debugbreak();
    }
    v4 -= v7;
  }
  if ( v4 )
  {
    memcpy_0((char *)this + this[2] + 12, (const void *)(a2 + i), v4);
    i += v4;
    this[2] += v4;
  }
  if ( this[2] == 0x8000
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 8))(this)
    && !byte_100580B1
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\MeqRemains\\meq_streams.h",
          1135,
          &byte_100580B1,
          "flushed",
          0)) )
  {
    __debugbreak();
  }
  return i;
}
