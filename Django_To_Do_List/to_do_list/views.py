from django.shortcuts import render, redirect
from django.http import HttpResponse
from .models import ToDo
# Create your views here.


def main_page(request):
    if request.method == "POST":
        title = request.POST.get("title")
        due = request.POST.get("due")
        status = False
        ToDo.objects.create(title=title, due=due, status=status)
        return redirect("/")
    todos = ToDo.objects.all()
    data = {"todos": todos}
    return render(request, 'main.html', data)


def delete_page(request):
    id = request.POST.get("id")
    todo = ToDo.objects.get(pk=id)
    todo.delete()
    return render(request, 'delete.html')
