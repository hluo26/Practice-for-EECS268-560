#include<iostream>
#include"node.h"

node::node()
{
  m_value = 0;
  m_left = nullptr;
  m_right = nullptr;
}

void node::setvalue(int x)
{
  m_value = x;
}

void node::setleft(node* left)
{
  m_left = left;
}

void node::setright(node* right)
{
  m_right = right;
}

int node::getvalue()
{
  return m_value;
}

node* node::getleft()
{
  return m_left;
}

node* node::getright()
{
  return m_right;
}
