/*
 * func-name: sub_10037000
 * func-address: 0x10037000
 * callers: none
 * callees: 0x100490f0, 0x10049250, 0x100492d0, 0x1004a5a0, 0x1004a5e0, 0x1004ae30, 0x101a26c0
 */

char __thiscall sub_10037000(int this, int a2, int a3)
{
  XMLSystem *v4; // edi
  char result; // al
  struct xercesc_2_5::DOMTreeWalker *Walker; // ebp
  struct DOMDocument *Document; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int Name; // eax
  char v12; // bl
  bool v13; // bl
  int *FirstNode; // eax
  int v15; // edx
  int v16; // eax
  char v17; // [esp-1Ch] [ebp-74h] BYREF
  int v18; // [esp-18h] [ebp-70h]
  int v19; // [esp-14h] [ebp-6Ch]
  int v20; // [esp-10h] [ebp-68h]
  int v21; // [esp-Ch] [ebp-64h]
  int v22; // [esp-8h] [ebp-60h]
  int v23; // [esp-4h] [ebp-5Ch]
  char *v24; // [esp+10h] [ebp-48h]
  _BYTE v25[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v26[28]; // [esp+30h] [ebp-28h] BYREF
  int v27; // [esp+54h] [ebp-4h]

  v24 = &v17;
  std::string::string(&v17, a2);
  v4 = (XMLSystem *)(this + 84);
  result = XMLSystem::Load(v17, v18, v19, v20, v21, v22, v23);
  if ( result )
  {
    Walker = XMLSystem::GetWalker((XMLSystem *)(this + 84));
    Document = xercesc_2_5::AbstractDOMParser::getDocument(*(xercesc_2_5::AbstractDOMParser **)(this + 172));
    v8 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
    *(_DWORD *)(this + 48) = (int)((double)(unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9)
                                 * 0.6000000238418579);
    *(_DWORD *)(this + 52) = 0;
    v10 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48))(Walker);
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (*(__int16 (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10) == 1 )
        {
          Name = XMLSystem::GetName(v26, v10);
          v27 = 0;
          v12 = std::operator==<char>(Name, "SceneInfo");
          v27 = -1;
          std::string::~string(v26);
          if ( v12 )
            break;
        }
        v10 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker);
        if ( !v10 )
          goto LABEL_6;
      }
      v13 = 1;
      std::string::string(&v17, "GameModule");
      FirstNode = (int *)XMLSystem::FindFirstNode(v10, v17, v18, v19, v20, v21, v22, v23);
      if ( FirstNode )
      {
        v15 = *FirstNode;
        v23 = 0;
        v16 = (*(int (__thiscall **)(int *, const wchar_t *))(v15 + 164))(FirstNode, L"Name");
        XMLSystem::GetString(v25, v16, v23);
        v27 = 1;
        v13 = (unsigned __int8)std::operator!=<char>(v25, a3) == 0;
        v27 = -1;
        std::string::~string(v25);
      }
      XMLSystem::Destroy(v4);
      return v13;
    }
    else
    {
LABEL_6:
      XMLSystem::Destroy(v4);
      return 1;
    }
  }
  return result;
}
