/*
 * func-name: ??1CMultiLineEB@@UAE@XZ
 * func-address: 0x100c8e90
 * callers: 0x1006ace0, 0x100ca100
 * callees: 0x101a2500
 */

void __thiscall CMultiLineEB::~CMultiLineEB(CMultiLineEB *this)
{
  CMultiLineEB *v1; // ebp
  char *v2; // esi
  void **v3; // edi
  void **v4; // ebx
  char *v5; // ebx
  char *v6; // edi
  int v7; // eax
  char *v8; // ebp

  v1 = this;
  v2 = (char *)this + 892;
  *(_DWORD *)this = &CMultiLineEB::`vftable';
  v3 = (void **)*((_DWORD *)this + 224);
  if ( (unsigned int)v3 > *((_DWORD *)this + 225) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v4 = (void **)*((_DWORD *)v2 + 2);
    if ( *((_DWORD *)v2 + 1) > (unsigned int)v4 )
      invalid_parameter_noinfo();
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v3 >= *((_DWORD *)v2 + 2) )
      invalid_parameter_noinfo();
    operator delete(*v3);
    if ( (unsigned int)v3 >= *((_DWORD *)v2 + 2) )
      invalid_parameter_noinfo();
    ++v3;
  }
  v5 = (char *)*((_DWORD *)v2 + 2);
  if ( *((_DWORD *)v2 + 1) > (unsigned int)v5 )
    invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)v2 + 1);
  if ( (unsigned int)v6 > *((_DWORD *)v2 + 2) )
    invalid_parameter_noinfo();
  if ( v6 != v5 )
  {
    v7 = (*((_DWORD *)v2 + 2) - (int)v5) >> 2;
    v8 = &v6[4 * v7];
    if ( v7 > 0 )
      memmove_s(v6, 4 * v7, v5, 4 * v7);
    *((_DWORD *)v2 + 2) = v8;
    v1 = this;
  }
  if ( *((_DWORD *)v2 + 1) )
    operator delete(*((void **)v2 + 1));
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  if ( *((_DWORD *)v1 + 220) )
    operator delete(*((void **)v1 + 220));
  *((_DWORD *)v1 + 220) = 0;
  *((_DWORD *)v1 + 221) = 0;
  *((_DWORD *)v1 + 222) = 0;
  if ( *((_DWORD *)v1 + 216) )
    operator delete(*((void **)v1 + 216));
  *((_DWORD *)v1 + 216) = 0;
  *((_DWORD *)v1 + 217) = 0;
  *((_DWORD *)v1 + 218) = 0;
  CREEditBox::~CREEditBox((void **)v1);
}
