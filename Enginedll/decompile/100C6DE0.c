/*
 * func-name: ??1CREDialog@@UAE@XZ
 * func-address: 0x100c6de0
 * callers: 0x10069aa0, 0x10075780, 0x100c9e60, 0x100ccaf0
 * callees: 0x10071140, 0x100a9980, 0x100b33e0, 0x100b5280, 0x100b5760, 0x101a2500
 */

void __thiscall CREDialog::~CREDialog(void **this)
{
  int i; // edi
  int *v3; // eax
  int v4; // edi
  _DWORD *v5; // ecx
  CREDialogResourceManager *v6; // eax
  int v7; // [esp-8h] [ebp-24h]

  *this = &CREDialog::`vftable';
  CREDialog::RemoveAllControls((CREDialog *)this);
  CREDialog::RemoveAllTexture((CREDialog *)this);
  if ( this[188] )
  {
    free(this[188]);
    this[188] = 0;
  }
  this[190] = 0;
  this[189] = 0;
  if ( this[185] )
  {
    free(this[185]);
    this[185] = 0;
  }
  this[187] = 0;
  this[186] = 0;
  for ( i = 0; i < (int)this[195]; ++i )
  {
    if ( *((_DWORD *)this[194] + i) )
      operator delete(*((void **)this[194] + i));
  }
  if ( this[194] )
  {
    free(this[194]);
    this[194] = 0;
  }
  this[196] = 0;
  this[195] = 0;
  v3 = (int *)this[37];
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 < (unsigned int)this[186] )
    {
      v5 = this[185];
      if ( v5[v4] != -1 )
      {
        v7 = v5[v4];
        v6 = REGetGlobalDialogResourceManager();
        CREDialogResourceManager::RemoveTexture(v6, v7);
        if ( v4 >= 0 && v4 < (int)this[186] )
          *((_DWORD *)this[185] + v4) = -1;
      }
    }
    if ( this[37] )
    {
      operator delete(this[37]);
      this[37] = 0;
    }
  }
  if ( this[935] )
    operator delete(this[935]);
  this[935] = 0;
  this[936] = 0;
  this[937] = 0;
  if ( this[194] )
  {
    free(this[194]);
    this[194] = 0;
  }
  this[196] = 0;
  this[195] = 0;
  if ( this[191] )
  {
    free(this[191]);
    this[191] = 0;
  }
  this[193] = 0;
  this[192] = 0;
  if ( this[188] )
  {
    free(this[188]);
    this[188] = 0;
  }
  this[190] = 0;
  this[189] = 0;
  if ( this[185] )
  {
    free(this[185]);
    this[185] = 0;
  }
  this[187] = 0;
  this[186] = 0;
  std::wstring::~wstring(this + 26);
  sub_10071140((int *)this);
}
