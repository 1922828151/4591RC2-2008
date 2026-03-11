/*
 * func-name: ?FromString@EditorVar@@SA?AW4Type@1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10016f70
 * callers: 0x1004a8d0, 0x1004bcb0
 * callees: none
 */

int __cdecl EditorVar::FromString(char a1)
{
  if ( (unsigned __int8)std::operator==<char>(&a1, "Bool") )
  {
    std::string::~string(&a1);
    return 1;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Int") )
  {
    std::string::~string(&a1);
    return 2;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Float") )
  {
    std::string::~string(&a1);
    return 3;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Float2") )
  {
    std::string::~string(&a1);
    return 4;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Float3") )
  {
    std::string::~string(&a1);
    return 5;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Float4") )
  {
    std::string::~string(&a1);
    return 6;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Filename") )
  {
    std::string::~string(&a1);
    return 8;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Texture") )
  {
    std::string::~string(&a1);
    return 9;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "String") )
  {
    std::string::~string(&a1);
    return 11;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "Color") )
  {
    std::string::~string(&a1);
    return 12;
  }
  else if ( (unsigned __int8)std::operator==<char>(&a1, "StringArray") )
  {
    std::string::~string(&a1);
    return 13;
  }
  else
  {
    std::string::~string(&a1);
    return 0;
  }
}
