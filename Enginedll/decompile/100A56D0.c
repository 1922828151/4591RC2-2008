/*
 * func-name: ?SetText@CUniBuffer@CREEditBox@@QAE_NPB_W@Z
 * func-address: 0x100a56d0
 * callers: 0x100ac3a0, 0x100acbe0, 0x100acec0, 0x100add90, 0x100ade20, 0x100c4990, 0x100c4b70, 0x100c5fd0, 0x100ca110, 0x100cb220, 0x100cb320, 0x100cc180, 0x10156140, 0x10157440, 0x10157630, 0x10157870
 * callees: 0x101a24ac, 0x101a252e, 0x101a253a
 */

bool __thiscall CREEditBox::CUniBuffer::SetText(CREEditBox::CUniBuffer *this, const wchar_t *a2)
{
  unsigned int v3; // kr00_4
  int v4; // ebx
  int v5; // eax
  int v6; // ebp
  void *v7; // edi
  const wchar_t *v8; // ecx
  _WORD *v9; // edx
  wchar_t v10; // ax
  bool result; // al

  v3 = wcslen(a2);
  v4 = v3 + 1;
  if ( *((_DWORD *)this + 1) < (signed int)(v3 + 1) )
  {
    do
    {
      v5 = *((_DWORD *)this + 1);
      v6 = 2 * v5;
      if ( !v5 )
        v6 = 256;
      v7 = operator new(2 * v6);
      if ( !v7 )
        break;
      if ( *(_DWORD *)this )
        memcpy(v7, *(const void **)this, 2 * *((_DWORD *)this + 2) + 2);
      operator delete[](*(void **)this);
      *(_DWORD *)this = v7;
      *((_DWORD *)this + 1) = v6;
    }
    while ( v6 < v4 );
    if ( *((_DWORD *)this + 1) < v4 )
      return 0;
  }
  v8 = a2;
  v9 = *(_WORD **)this;
  do
  {
    v10 = *v8;
    *v9++ = *v8++;
  }
  while ( v10 );
  result = 1;
  *((_DWORD *)this + 2) = v3;
  *((_BYTE *)this + 16) = 1;
  return result;
}
