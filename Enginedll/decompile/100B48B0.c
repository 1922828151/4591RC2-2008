/*
 * func-name: ??1CREDialogResourceManager@@QAE@XZ
 * func-address: 0x100b48b0
 * callers: 0x101b8f70
 * callees: 0x101a2500
 */

void __thiscall CREDialogResourceManager::~CREDialogResourceManager(CREDialogResourceManager *this)
{
  int i; // edi
  int j; // edi
  int v4; // ecx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 5) + 4 * i) )
      operator delete(*(void **)(*((_DWORD *)this + 5) + 4 * i));
  }
  if ( *((_DWORD *)this + 5) )
  {
    free(*((void **)this + 5));
    *((_DWORD *)this + 5) = 0;
  }
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  for ( j = 0; j < *((_DWORD *)this + 3); ++j )
  {
    v4 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v4 + 4 * j) )
      operator delete(*(void **)(v4 + 4 * j));
  }
  if ( *((_DWORD *)this + 2) )
  {
    free(*((void **)this + 2));
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( *((_DWORD *)this + 5) )
  {
    free(*((void **)this + 5));
    *((_DWORD *)this + 5) = 0;
  }
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( *((_DWORD *)this + 2) )
  {
    free(*((void **)this + 2));
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}
