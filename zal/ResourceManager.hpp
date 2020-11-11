#pragma once

#include "Resource.hpp"

class ResourceManager
{
Resource* R;
public:
ResourceManager(){
R = new Resource;}    

ResourceManager(const ResourceManager &RM){
R = new Resource{ *RM.R };}

ResourceManager operator=(const ResourceManager& RM){
if (&RM != this) {
delete R;
R = new Resource{ *RM.R };}
return *this;}

~ResourceManager() {
delete R;}

double get(){
return R->get();}    
};
