// fetching the todoList from localStorage
let listStr = localStorage.getItem('todoList');

// asigning the fetched todoList if todoList is empty then asign empty
let todoList = JSON.parse(listStr) || [];

// displaying the whole todoList
displayTodoList();

// functoin : adding new todoItem in the todoList
function addNewTodo(){
    // let Date = document.querySelector('.todo-date');
    // let Input = document.querySelector('.todo-input');
    // // checking if Input and Date element empty or not

    // if(Input.value !== '' && Date.value !== ''){
    //     // fetching new todoItem input by the user
        let todoInput = Input.value;

        let todoDate = Date.value;

        setting Input and Date element empty after fetching the user input
        Input.value = '';
        Date.value = '';

        // pushing at end the new todoItem in the todoList
        todoList.push({item: todoInput, date: todoDate});

        // saving the whole todoList as String in the local storage
        localStorage.setItem('todoList',JSON.stringify(todoList));

        // again displaying the whole todoList
        displayTodoList();
    }
}

// function : display the whole todoList
function displayTodoList(){
    let newHtml = '';

    // creating new HTML element for every todoItem
    for( i = 0; i < todoList.length; i++){
        newHtml += `
            <span>${todoList[i].item}</span>
            <span>${todoList[i].date}</span>
            <button class="inputs-style btn" onclick="

            todoList.splice(${i},1);
            
            // again displaying the whole todoList
            displayTodoList();
            
            // again saving the whole todoList as String in the local storage
            localStorage.setItem('todoList',JSON.stringify(todoList));
            ">Done</button>
            `;
            // deleting the todoItem which pressed by the user
            // deleting the todoItem which pressed by the user
        }
        
        // asign all HTML element which created by above code in the div named as todo-item-container
        document.querySelector('.todo-item-container').innerHTML = newHtml;
    }
    
    // function : deleting todoList 
    function delTodoList(){
        // removing the todoList from local storage
        localStorage.removeItem('todoList');
        // setting todoList empty
        todoList = [];
}