/*
 * func-name: ?PreLoad@ModelFrame@@QAEXPAVXMLLoad@@@Z
 * func-address: 0x1009e630
 * callers: 0x1009e630, 0x100ef520
 * callees: 0x1009e630, 0x1011ed60, 0x1011ef20, 0x10171860
 */

void __thiscall ModelFrame::PreLoad(ModelFrame *this, struct XMLLoad *a2)
{
  ILoad *v2; // ebx
  ModelFrame *v4; // ecx
  char v5; // [esp-24h] [ebp-40h] BYREF
  int v6; // [esp-20h] [ebp-3Ch]
  int v7; // [esp-1Ch] [ebp-38h]
  int v8; // [esp-18h] [ebp-34h]
  int v9; // [esp-14h] [ebp-30h]
  int v10; // [esp-10h] [ebp-2Ch]
  int v11; // [esp-Ch] [ebp-28h]
  struct XMLLoad **v12; // [esp-8h] [ebp-24h]
  int v13; // [esp-4h] [ebp-20h]
  unsigned __int8 *v14; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v15[4]; // [esp+14h] [ebp-8h] BYREF
  char *v16; // [esp+18h] [ebp-4h]

  v2 = a2;
  do
  {
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 72, &unk_101C46D3) )
    {
      a2 = this;
      if ( (unsigned __int8)AsyncLoader::GetMemCache((char *)this + 72, &v14, v15) )
      {
        ILoad::ReadMeshBinary_Mem(v2, &v14, &a2, *((_DWORD *)this + 5));
      }
      else
      {
        v13 = *((_DWORD *)this + 5);
        v12 = &a2;
        v16 = &v5;
        std::string::string(&v5, (char *)this + 72);
        ILoad::ReadMeshBinary(v5, v6, v7, v8, v9, v10, v11, v12, v13);
      }
    }
    v4 = (ModelFrame *)*((_DWORD *)this + 90);
    if ( v4 )
      ModelFrame::PreLoad(v4, v2);
    this = (ModelFrame *)*((_DWORD *)this + 89);
  }
  while ( this );
}
