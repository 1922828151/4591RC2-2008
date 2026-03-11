/*
 * func-name: sub_1003AF90
 * func-address: 0x1003af90
 * callers: 0x1003b0a0, 0x1003b120
 * callees: 0x1003adf0, 0x1004a5a0, 0x1004ae30, 0x100a1d10, 0x101a26c0
 */

char __thiscall sub_1003AF90(int this, int a2)
{
  int v3; // ebp
  void *v4; // ebx
  void *v5; // eax
  char result; // al
  struct xercesc_2_5::DOMTreeWalker *Walker; // edi
  struct DOMDocument *Document; // eax
  int v9; // eax
  int v10; // eax
  int i; // eax
  char v12; // [esp-1Ch] [ebp-34h] BYREF
  int v13; // [esp-18h] [ebp-30h]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp-10h] [ebp-28h]
  int v16; // [esp-Ch] [ebp-24h]
  int v17; // [esp-8h] [ebp-20h]
  int v18; // [esp-4h] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-8h] BYREF
  void *v20; // [esp+1Ch] [ebp+4h]

  v3 = this + 56;
  std::string::operator=(this + 56, a2);
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  v4 = *(void **)(this + 20);
  if ( *(_DWORD *)(this + 16) > (unsigned int)v4 )
    invalid_parameter_noinfo();
  v5 = *(void **)(this + 16);
  v20 = v5;
  if ( (unsigned int)v5 > *(_DWORD *)(this + 20) )
  {
    invalid_parameter_noinfo();
    v5 = v20;
  }
  std::vector<Model *>::erase((int)&v19, this + 12, v5, this + 12, v4);
  std::string::string(&v12, v3);
  result = XMLSystem::Load(v12, v13, v14, v15, v16, v17, v18);
  if ( result )
  {
    Walker = XMLSystem::GetWalker((XMLSystem *)(this + 84));
    Document = xercesc_2_5::AbstractDOMParser::getDocument(*(xercesc_2_5::AbstractDOMParser **)(this + 172));
    v9 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    *(_DWORD *)(this + 48) = (int)((double)(unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10)
                                 * 0.6000000238418579);
    *(_DWORD *)(this + 52) = 0;
    for ( i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48))(Walker);
          i;
          i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker) )
    {
      sub_1003ADF0((int *)this, v3, i);
    }
    return 1;
  }
  return result;
}
