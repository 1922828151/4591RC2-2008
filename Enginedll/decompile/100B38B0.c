/*
 * func-name: ?RemoveAllItems@CREPropertiesList@@QAEXXZ
 * func-address: 0x100b38b0
 * callers: 0x100c7f10
 * callees: 0x101a2500
 */

void __thiscall CREPropertiesList::RemoveAllItems(CREPropertiesList *this)
{
  int i; // edi
  CREScrollBar *v3; // ecx
  int v4; // edx
  int v5; // eax

  for ( i = 0; i < *((_DWORD *)this + 306); ++i )
    operator delete(*(void **)(*((_DWORD *)this + 305) + 4 * i));
  if ( *((_DWORD *)this + 305) )
  {
    free(*((void **)this + 305));
    *((_DWORD *)this + 305) = 0;
  }
  v3 = (CREPropertiesList *)((char *)this + 564);
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 306) = 0;
  v4 = *((_DWORD *)this + 291);
  *((_DWORD *)this + 293) = 0;
  *((_DWORD *)this + 294) = 1;
  if ( v4 < 0 || (v5 = *((_DWORD *)this + 292), v5 >= 1) )
  {
    *((_DWORD *)this + 291) = 0;
  }
  else if ( v5 + v4 > 1 )
  {
    *((_DWORD *)this + 291) = 1 - v5;
    CREScrollBar::UpdateThumbRect(v3);
    return;
  }
  CREScrollBar::UpdateThumbRect(v3);
}
